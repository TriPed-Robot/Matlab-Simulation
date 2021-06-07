function [theta0,theta1, theta2] = inverseKinematics(A,sim_theta0)
% maps a homogene transformation matrix, which describes a position and
% orientation from the fcs relative to the ccs, to the joint space
% variables
% tldr: Matrix A -> values for MCS00/01/02

options = optimoptions(@fmincon,'OptimalityTolerance',10^-10,'StepTolerance',10^-10,'display','off'); % some options for more precise solution

% find out transformation matrix for way0 & LL such that the error to A is
% minimal
guessTheta0 = 0 * pi / 180;
guessTheta0 = sim_theta0;
% arbitrary quess values. should be somewhat in the right area.
guessVals = [0.9961, -0.0000, -0.0893, 0.0000, guessTheta0]; % [a0,b0,c0,d0,theta0]

disp('Minimizing way 0 + LL');
%[OptVals,fval,~,output] = fminunc(@closingWay0toTarget,guessVals,options)
clW0toTarget = @(guessVals)closingWay0toTarget(guessVals,A);
[OptVals,fval,~,output] = fmincon(clW0toTarget,guessVals,[],[],[],[],[],[],@constrainsWay0,options);

% get values from way0
OptVals = num2cell(OptVals);
[a0,b0,c0,d0,theta0] = OptVals{:};

% solve closure equation with given way0

guessTheta1 = 10 * pi / 180; % initial guessValues for theta1 and 2
guessTheta2 = -10 * pi / 180;
% theta1,a1_1,...,d1_2, theta2,a2_1,...,d2_2

disp('Minimizing way1 and way2 to transf from way0')
% guessVals = [theta1,a1_1,...,d1_2,theta2,a2_1,...,d2_2]
guessVals = [guessTheta1, 0.8135, 0.0244, -0.0019, -0.5821, 0.9338, 0.0064, -0.0889, 0.3413, guessTheta2, 0.8135, -0.0245, -0.0019, 0.5821, -0.9338, 0.0064, 0.0889, 0.3413]; 
%[OptVals,fval,~,output] = fminunc(@closingEqWithGivenWay0,guessVals,options)
clEWithGivenWay0 = @(GUESSEDVALS)closingEqWithGivenWay0(GUESSEDVALS,a0,b0,c0,d0);
[OptVals,fval,~,output] = fmincon(clEWithGivenWay0,guessVals,[],[],[],[],[],[],@constrainsWays1_2,options);
theta1 = OptVals(1);
theta2 = OptVals(10);

% disp(['the minimized thetas to achieve the transf. should be: theta1: ', num2str(theta1), ' theta2: ', num2str(theta2), ' theta0: ', num2str(theta0)]);

end


function [error] = closingWay0toTarget(GUESSEDVALS,MatA)
% this function returns the error between the joint values of the kinematic
% way 0 with added LegLinear ( CCS -> LCS0 --> FCS) and the joint values of
% the target matrix MatA

GUESSEDVALS = num2cell(GUESSEDVALS);
[a0,b0,c0,d0,theta0] = GUESSEDVALS{:};
way0m = Weg0(a0,b0,c0,d0);
way0LLm = AddLegLinear(way0m,theta0);
[a,b,c,d, x,y,z] = getValuesfromHomogenMatrix(way0LLm);
[Aa,Ab,Ac,Ad, Ax,Ay,Az] = getValuesfromHomogenMatrix(MatA);

error = sum(([a,b,c,d, x,y,z] - [Aa,Ab,Ac,Ad, Ax,Ay,Az]).^2) + 1000*(a^2+b^2+c^2+d^2 -1)^2; % error of the transform to A. we want to minimze this
end

function [error] = closingEqWithGivenWay0(GUESSEDVALS,a0,b0,c0,d0)
% minimize way1 and way2 for given way0 transf. --> get theta1 and theta2
GUESSEDVALS = num2cell(GUESSEDVALS);
[theta1,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2, theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2] = GUESSEDVALS{:};


A = Weg0(a0,b0,c0,d0);
B = Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2);
C = Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2);

[Aa,Ab,Ac,Ad, Ax,Ay,Az] = getValuesfromHomogenMatrix(A);
[Ba,Bb,Bc,Bd, Bx,By,Bz] = getValuesfromHomogenMatrix(B);
[Ca,Cb,Cc,Cd, Cx,Cy,Cz] = getValuesfromHomogenMatrix(C);

Avals = [Aa,Ab,Ac,Ad, Ax,Ay,Az];
Bvals = [Ba,Bb,Bc,Bd, Bx,By,Bz];
Cvals = [Ca,Cb,Cc,Cd, Cx,Cy,Cz];

error = [Avals-Bvals, Bvals-Cvals, Cvals-Avals]; % 1x21 vector
error = sum(error.^2) + 1000 * ((a1_1^2 + b1_1^2 + c1_1 ^2 + d1_1^2 -1)^2 + (a1_2^2 + b1_2^2 + c1_2 ^2 + d1_2^2 -1)^2 + (a2_1^2 + b2_1^2 + c2_1 ^2 + d2_1^2 -1)^2 + (a2_2^2 + b2_2^2 + c2_2^2 + d2_2^2 -1)^2 );

end

function [c,ceq]= constrainsWay0(x)
% make sure that solver fmincon, solves with constraint : ||quat0|| == 1
%input: x = [a0,b0,c0,d0,theta0]. with a to d parameters of quat0
c = []; % condition for ... <= 0
ceq = x(1)^2+x(2)^2+x(3)^2+x(4)^2 - 1; % condition for ||quat0|| == 1    
end

function [c,ceq]= constrainsWays1_2(x)
% make sure that solver fmincon, solves with constraint : ||quati_j|| == 1
%input: x = [theta1,a1_1,...,d1_2,theta2,a2_1,...,d2_2].
c = []; % condition for ... <= 0
ceq1_1 = x(2)^2+x(3)^2+x(4)^2+x(5)^2 - 1; % condition for ||quat1_1|| == 1
ceq1_2 = x(6)^2+x(7)^2+x(8)^2+x(9)^2 - 1; % condition for ||quat1_2|| == 1
ceq2_1 = x(11)^2+x(12)^2+x(13)^2+x(14)^2 - 1; % condition for ||quat2_1|| == 1
ceq2_2 = x(15)^2+x(16)^2+x(17)^2+x(18)^2 - 1; % condition for ||quat2_2|| == 1
ceq = [ceq1_1;ceq1_2;ceq2_1;ceq2_2];
end
