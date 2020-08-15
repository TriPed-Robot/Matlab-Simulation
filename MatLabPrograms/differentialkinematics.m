function differentialkinematics()
% get Matrices needed for forward / inverse diff kinematics
% Ones * d/dt p = Jacobians * d/dt q

% get jacobians
[jacobianWay0, jacobianWay1, jacobianWay2] = WayJacobians();
% merge Jacobians into one matrix: [J1,0,0;0,J2,0;0,0,J3]
[%MatJacobians] = MergeJacobiansToOneMatrix(jacobianWay0,jacobianWay1,jacobianWay2);

% Ones-Matrix with right dimension
%MatOnes = ones(21,25); % 3x7, 5+10+10

% pseudoinverse via pinv
%pseudoInvOnes = pinv(MatOnes);
%disp(['size of pseudoInv(Ones)',num2str(size(pseudoInvOnes))]);

%pseudoInvJacobinans = pinv(MatJacobians); % this takes ages. maybe add assumptions or give actual values.
%disp(['size of pseudoInv(Jacobians)',num2str(size(pseudoInvJacobinans))]);

% forward diff kinematics: d/dt p = inv(Ones)*Jac* d/dt q, 
% p is coord in taskspace, q is joint values
%pdot = pseudoInvOnes * MatJacobians * qdot;

% inverse diff kinematic: d/dt q = inv(Jac) * Ones * d/dt p
%qdot = pseudoInvJacobinans * MatOnes * pdot;

% Residuum
%R = norm(MatOnes * pdot - MatJacobians * qdot);
end


function [jacobianWay0, jacobianWay1, jacobianWay2] = WayJacobians()
% this function calculates the jacobians for the Ways 0 to 2 from the
% triped.
syms theta0; % symbolic value for MCS00 joint
% jacobian for Way 0
syms a0 b0 c0 d0;
vW0 = valuesWay0([theta0, a0,b0,c0,d0]);
jacobianWay0 = jacobian(vW0,[theta0, a0,b0,c0,d0]);

disp(['size of jacobianWay0: (expected 7x5): ',num2str(size(jacobianWay0))]);
disp('jacobi matrix of Way 0');
disp(jacobianWay0);

% jacobian for Way 1
syms theta1 a1_1 b1_1 c1_1 d1_1 a1_2 b1_2 c1_2 d1_2;
vW1 = valuesWay1([theta0,theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2]);
jacobianWay1 = jacobian(vW1,[theta0,theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2]);
disp(['size of jacobianWay1: (expected 7x10): ',num2str(size(jacobianWay1))]);
%disp('jacobi matrix of Way 1');
%disp(jacobianWay1);


% jacobian for Way 2 [theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2,theta0]
syms theta2 a2_1 b2_1 c2_1 d2_1 a2_2 b2_2 c2_2 d2_2;
vW2 = valuesWay2([theta0,theta2, a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]);
jacobianWay2 = jacobian(vW2,[theta0,theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]);
disp(['size of jacobianWay2: (expected 7x10): ',num2str(size(jacobianWay2))]);
%disp('jacobi matrix of Way 2');
%disp(jacobianWay2);
end

% p = f(q), p in taskspace, q in jointspace
function [transVal] = valuesWay0(jointvalues)
%disp(jointvalues);
jointvalues = num2cell(jointvalues);
[theta0,a0,b0,c0,d0] = jointvalues{:};
Weg0Mat = Weg0(a0,b0,c0,d0);
Weg0Mat = AddLegLinear(Weg0Mat,theta0);

% 
[transfa0,transfb0,transfc0,transfd0, transfx0, transfy0, transfz0] =getValuesfromHomogenMatrix(Weg0Mat);
%transVal = [transfa0;transfb0;transfc0;transfd0; transfx0; transfy0; transfz0];
transVal = [transfx0; transfy0; transfz0]; % ignore rotation to make calculation easier
%disp(['size of transVal: (expected 7x1): ',num2str(size(transVal))]);
end

function [transVal] = valuesWay1(jointvalues)
%disp(jointvalues);
jointvalues = num2cell(jointvalues);
[theta0,theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2] = jointvalues{:};
Weg1Mat = Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2);
Weg1Mat = AddLegLinear(Weg1Mat,theta0);

% 
[transfa1,transfb1,transfc1,transfd1, transfx1, transfy1, transfz1] =getValuesfromHomogenMatrix(Weg1Mat);
%transVal = [transfa1;transfb1;transfc1;transfd1; transfx1; transfy1; transfz1];
transVal = [transfx1; transfy1; transfz1]; % ignore rotation to make calculation easier
%disp(['size of transVal: (expected 7x1): ',num2str(size(transVal))]);
end

function [transVal] = valuesWay2(jointvalues)
%disp(jointvalues);
jointvalues = num2cell(jointvalues);
[theta0,theta2, a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2] = jointvalues{:};
Weg2Mat = Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2);
Weg2Mat = AddLegLinear(Weg2Mat,theta0);

% 
[transfa2,transfb2,transfc2,transfd2, transfx2, transfy2, transfz2] =getValuesfromHomogenMatrix(Weg2Mat);
%transVal = [transfa2;transfb2;transfc2;transfd2; transfx2; transfy2; transfz2];
transVal = [transfx2; transfy2; transfz2]; % ignore rotation to make calculation easier
%disp(['size of transVal: (expected 7x1): ',num2str(size(transVal))]);
end

function [MatJacobians] = MergeJacobiansToOneMatrix(jacobianWay0,jacobianWay1,jacobianWay2)
% fill matrices so that dimensions fit
%{
[
J0,0,0
0,J1,0
0,0,J2
]
%}
MatJacobians = [jacobianWay0,zeros(7,20);zeros(7,5),jacobianWay1,zeros(7,10);zeros(7,15),jacobianWay2];
disp(['size of the combined jacobians: ',num2str(size(MatJacobians))]);
end

function [J0_fit,J1_fit,J2_fit] = fitJacobianMatrixDimensions(jacobianWay0,jacobianWay1,jacobianWay2)
% this function fills the Jacobian's with zeros, such that their dimensions
% fit logically. and we can subtract them for a closing equation
% J0_fit = (J0,0,0; 0,0,0; 0,0,0); 
% J1_fit = (0,0,0; 0,J1,0; 0,0,0); 
% J2 = (0,0,0; 0,0,0; 0,0,J2);
sizeJ0 = size(jacobianWay0); % [rows, columns] of JacobianWay0
sizeJ1 = size(jacobianWay1);
sizeJ2 = size(jacobianWay2);

assert((sizeJ0(1) == sizeJ1(1)) && (sizeJ0(1) == sizeJ2(1)), "Jacobian rows are NOT equal!");
rows = sizeJ0(1) + sizeJ1(1) + sizeJ2(1); % get dimensions of fitted matrices
columns = sizeJ0(2)+ sizeJ1(2)+ sizeJ2(2);

J0_fit = [jacobianWay0,zeros(sizeJ0(1),columns-sizeJ0(2)); zeros(rows-sizeJ0(1),columns)];
J1_fit = [zeros(sizeJ0(1),columns); zeros(sizeJ1(1),sizeJ0(2)), jacobianWay1, zeros(sizeJ1(1),sizeJ2(2)); zeros(sizeJ2(1),columns)];
J2_fit = [zeros(rows-sizeJ2(1),columns); zeros(sizeJ2(1),columns-sizeJ2(2)), jacobianWay2];

assert((size(J0_fit) == size(J1_fit)) && (size(J0_fit) == size(J2_fit)), "fitted Matrices dont match!" );


end