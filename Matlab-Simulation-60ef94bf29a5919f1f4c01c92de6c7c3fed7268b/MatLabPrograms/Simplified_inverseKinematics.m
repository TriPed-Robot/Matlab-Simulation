function [extend,Rx,Ry,Rz,Residuum]= Simplified_inverseKinematics(x,y,z,LegNumber, data)

% data = [Rx,Ry,Rz,extend]

% easy adapt to legs 1 & 2: change base coordinate system from ccs, to
% rotated ccs.
[newx,newy,newz] = transformCoordinateSystem(x,y,z,LegNumber);

% calculate target Matrix from input cordinates
%reduced task space to x,y,z, ignore roll, pitch, yaw
[targetM] = convertCoordinatesToMatrix(newx,newy,newz);

%convert euer angles from data to quaternion
guess = convertDataToGuess(data);

[extend, a0,b0,c0,d0, Residuum] = inverseKinematics(targetM,guess);
eulerXYZ = quat2eul([a0,b0,c0,d0],'XYZ');
Rx = eulerXYZ(1);
Ry = eulerXYZ(2);
Rz = eulerXYZ(3);

end

function [newx,newy,newz] = transformCoordinateSystem(oldx,oldy,oldz,legNr)
% this function translates the x,y,z coordinates from the CCS into
% coordinates from a cooridnate system, which is like the ccs but rotated
% ,such that its x axis points towards the leg. This makes the inverse
% kinematics for the leg 1 & 2 easier.

angle = legNr * 120 * pi/180;

newCoord = [cos(angle), -sin(angle), 0, 0; sin(angle), cos(angle), 0, 0; 0, 0, 1, 0; 0, 0, 0, 1]* [oldx;oldy;oldz;1];
newx = newCoord(1);
newy = newCoord(2);
newz = newCoord(3);

end

function [transfM] = convertCoordinatesToMatrix(x,y,z)
% roll = rotX, pitch  = rotY, yaw = rotZ 

%first translate frame by [x,y,z]
transfM = homogenTranslationMat(x,y,z);

%then rotate using the roll-pitch-yaw convention
%transfM2 = eul2rotm([roll,pitch,yaw],'XYZ');
%transfM2 =  [transfM2,[0;0;0];[0,0,0,1]];

%transfM = transfM1 * transfM2;

end

function [guess] = convertDataToGuess(data)
    qXYZ = eul2quat([data(1),data(2),data(3)],'XYZ');
    guess = [qXYZ,data(4)];
    
end

function [theta0,a0,b0,c0,d0,fvalWay0] = inverseKinematics(A,guess)
% maps a homogene transformation matrix, which describes a position and
% orientation from the fcs relative to the ccs, to the joint space
% variables
% tldr: Matrix A -> values for MCS00/01/02

options = optimoptions(@fmincon,'OptimalityTolerance',10^-10,'StepTolerance',10^-10,'display','off','Algorithm','sqp'); % some options for more precise solution

% find out transformation matrix for way0 & LL such that the error to A is
% minimal
% guessTheta0 = 0 * pi / 180;
%guessTheta0 = sim_theta0;
% arbitrary quess values. should be somewhat in the right area.
%guessVals = [0.9961, -0.0000, -0.0893, 0.0000, guessTheta0]; % [a0,b0,c0,d0,theta0]
guessVals = guess;

% disp('Minimizing way 0 + LL');
%[OptVals,fval,~,output] = fminunc(@closingWay0toTarget,guessVals,options)
clW0toTarget = @(guessVals)closingWay0toTarget(guessVals,A);
[OptVals,fvalWay0,~,~] = fmincon(clW0toTarget,guessVals,[],[],[],[],[],[],@constrainsWay0,options);

% get values from way0
a0 = OptVals(1);
b0 = OptVals(2);
c0 = OptVals(3);
d0 = OptVals(4);
theta0 = OptVals(5);

end


function [error] = closingWay0toTarget(GUESSEDVALS,MatA)
% this function returns the error between the joint values of the kinematic
% way 0 with added LegLinear ( CCS -> LCS0 --> FCS) and the joint values of
% the target matrix MatA


a0 = GUESSEDVALS(1);
b0 = GUESSEDVALS(2);
c0 = GUESSEDVALS(3);
d0 = GUESSEDVALS(4);
theta0 = GUESSEDVALS(5);

way0m = Weg0(a0,b0,c0,d0);
way0LLm = AddLegLinear(way0m,theta0);
[a,b,c,d, x,y,z] = getValuesfromHomogenMatrix(way0LLm);
[Aa,Ab,Ac,Ad, Ax,Ay,Az] = getValuesfromHomogenMatrix(MatA);

[dist,desired_orientation]= cart2pol(Ax-0.265,Ay);
current_orientation = quat2eul([a0,b0,c0,d0]);

error = sum(([x,y,z] - [Ax,Ay,Az]).^2) + 1*(a^2+b^2+c^2+d^2 -1)^2+10*(desired_orientation-current_orientation(1))^2; % error of the transform to A. we want to minimze this
end


function [c,ceq]= constrainsWay0(x)
% make sure that solver fmincon, solves with constraint : ||quat0|| == 1
%input: x = [a0,b0,c0,d0,theta0]. with a to d parameters of quat0
c = []; % condition for ... <= 0
ceq = x(1)^2+x(2)^2+x(3)^2+x(4)^2 - 1; % condition for ||quat0|| == 1    
end

function [Weg0Mat] = Weg0(a0,b0,c0,d0)
A1 = homogenTranslationMat(0.265,0,0.014);
A2 = makeRotHomogen(quatRotM(a0,b0,c0,d0));
Weg0Mat = A1 * A2;
end

function [ALeg] = AddLegLinear(A,theta0)
% this functions adds transformations from the Point P; which is the
% Endpoint from Weg0,1,2; to the FKS at the LegLinear part.
%{
Inputs:
A: Transformationmatrix, which describes Transformation from HKS to P, Use
Weg0.m for that.
theta0: angle [radians] for joint at MKS00
%}

A1 = homogenTranslationMat(1.640, 0, -0.037); % transform P to P0 (center of LegLinear rotation)

theta0 = -1* theta0 * 0.07/(2*pi*1.5); % gear constraint: transfrom theta at MKS00 to theta around P0, gear ratio is 0.07/(2*pi*1.5) [circumferences of the gears MCS00 / LL]
startingvalue = -0 * pi/180;
theta0 = theta0 + startingvalue; %offset, depending on which position the Leg is for theta at MKS00 is 0
A2 = makeRotHomogen(quatRotM(cos(theta0/2),0,sin(theta0/2),0)); % rotate theta [radians] around y-axis of P0

A3 = homogenTranslationMat(-1.500,0,0); %transform from P0-joint to FKS

ALeg = A*A1*A2*A3;
end

function [res] = homogenTranslationMat(x,y,z)
    %this function forms a Translation about a vector x,y,z in a homogenous
    %transformation matrix res. 
    res = [1 0 0 x; 0 1 0 y; 0 0 1 z; 0 0 0 1];
end

function [res] = makeRotHomogen(R)
% this function fills a Rotationmatrix to make it a homogen transformation
% matrix
res = [R(1,1) R(1,2) R(1,3) 0; R(2,1) R(2,2) R(2,3) 0; R(3,1) R(3,2) R(3,3) 0; 0 0 0 1];
end

function [res] = quatRotM(a,b,c,d) %%Todo: use a,b,c,d as inputs
    % this function calculates the quaternion rotation matrix for given
    % vector (kx,ky,kz) and angle theta
    res = [1-2*(c^2+d^2) 2*(b*c-d*a) 2*(b*d + c*a); 2*(b*c + d*a) 1-2*(b^2+d^2) 2*(c*d - b*a); 2*(b*d-c*a) 2*(c*d+b*a) 1-2*(b^2+c^2) ];
end

function [a,b,c,d, x,y,z] = getValuesfromHomogenMatrix(A)
    % this function returns the Vector by which a homogenous
    % Transformationmatrix shifts a Point
    x = A(1,4);
    y = A(2,4);
    z = A(3,4);

    %as well as the Values of the Quaternion describing the rotation
    R = A(1:3,1:3); % get Rot mat from homogen Mat
    quat = rotm2quat(R);
    a = quat(1);
    b = quat(2);
    c = quat(3);
    d = quat(4);
%     t = R(1,1)+R(2,2)+R(3,3);
%     r = sqrt(1+t);
%     s = 1/(2*r);
%     a = 1/2 * r;
%     b = (R(3,2)-R(2,3))*s;
%     c = (R(1,3)-R(3,1))*s;
%     d= (R(2,1)-R(1,2))*s;
    
end
