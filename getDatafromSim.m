function getDatafromSim(out)
% this only works if the triped was simulated for a SINGLE timestep.
% call: getDatafromSim(out)

% 1 Value
mks01 = out.MKS01_joint.get('Data'); % theta1
mks02 = out.MKS02_joint.get('Data');

% 1x3 Array with Values for rot around x,y,z Axis from BKS joint
%bks0 = [out.BKS0_joint_x.get('Data'), out.BKS0_joint_y.get('Data'), out.BKS0_joint_z.get('Data')];
bks0 = out.BKS0_joint.get('Data'); % test with spherical joint as BKS
bks0 = num2cell(bks0); % Matlab type magic. This is a fight against the language
[a0,b0,c0,d0] = bks0{:};

%1x4 array, possibly quaternion
Sperical01_1 = out.Sperical_joint01_1.get('Data'); % first spherical joint of Koppelstange1 
Sperical01_2 = out.Sperical_joint01_2.get('Data'); % 2. spherical joint of Koppelstange1
Sperical02_1 = out.Sperical_joint02_1.get('Data'); % first spherical joint of Koppelstange2 
Sperical02_2 = out.Sperical_joint02_2.get('Data'); % 2. spherical joint of Koppelstange2 

% error checks:
if(sum([a0,b0,c0,d0].^2) ~= 1)
    disp("Achtung: |Quat-BKS| != 1")
    disp([a0,b0,c0,d0])
elseif (sum(Sperical01_1.^2) ~= 1)
    disp("Achtung: |Quat-Sperical01_1| != 1")
    disp(Sperical01_1)
elseif (sum(Sperical01_2.^2) ~= 1)
    disp("Achtung: |Quat-Sperical01_2| != 1")
    disp(Sperical01_2)
elseif (sum(Sperical02_1.^2) ~= 1)
    disp("Achtung: |Quat-Sperical02_1| != 1")
    disp(Sperical02_1)
elseif (sum(Sperical02_2.^2) ~= 1)
    disp("Achtung: |Quat-Sperical02_2| != 1")
    disp(Sperical02_2)
end

% setup values for inserting into Weg-functions
theta1 = mks01;
theta2 = mks02;

%{
    % get Quaternion from BKS gymbal joint
quatBKS = rotm2quat(rotX(bks0(1))*rotY(bks0(2))*rotZ(bks0(3)));
%quatBKS = quatBKS./norm(quatBKS);
quatBKS = num2cell(quatBKS); % Matlab type magic. This is a fight against the language
[a0,b0,c0,d0] = quatBKS{:}; % set a0,..d0 to the parts of said quaternion
%}
Sperical01_1 = num2cell(Sperical01_1);
Sperical01_2 = num2cell(Sperical01_2);
Sperical02_1 = num2cell(Sperical02_1);
Sperical02_2 = num2cell(Sperical02_2);

[a1_1,b1_1,c1_1,d1_1] = Sperical01_1{:};
[a1_2,b1_2,c1_2,d1_2] = Sperical01_2{:};
[a2_1,b2_1,c2_1,d2_1] = Sperical02_1{:};
[a2_2,b2_2,c2_2,d2_2] = Sperical02_2{:};

%Weg0m = Weg0(a0,b0,c0,d0)
%Weg1m = Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2)
%Weg2m = Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2)

% try to minimize closingEquation using guessed data from Simscape
% simulation
disp("Starting minimizing closingEQ")
%simVals = [a0,b0,c0,d0,theta1,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2];
% thetas will be constant!
simVals = [a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2];
simVals = zeros(20,1);

options = optimoptions(@fminunc,'OptimalityTolerance',10^-10,'StepTolerance',10^-10); % some options for more precise solution
[OptVals,fval,exitflag,output] = fminunc(@closingEquation,simVals,options)
%[OptVals,fval,exitflag,output] = fminsearch(@closingEquation,simVals)



%optVals = num2cell(optVals);
%[Opta0,Optb0,Optc0,Optd0,Opttheta1,Opta1_1,Optb1_1,Optc1_1,Optd1_1, Opta1_2,Optb1_2,Optc1_2,Optd1_2, Opttheta2,Opta2_1,Optb2_1,Optc2_1,Optd2_1, Opta2_2,Optb2_2,Optc2_2,Optd2_2] = x{:}

%Error = OptVals-simVals
Weg0(a0,b0,c0,d0)
Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2)
Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2)
end

function [res] = rotX(w)
res = [1,0,0; 0,cos(w),-sin(w); 0,sin(w),cos(w)];
end

function [res] = rotY(w)
res = [cos(w),0,sin(w); 0,1,0; -sin(w),0,cos(w)];
end
function [res] = rotZ(w)
res = [cos(w),-sin(w),0; sin(w),cos(w),0; 0,0,1];
end