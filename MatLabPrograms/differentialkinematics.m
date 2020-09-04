function differentialkinematics(out)

% calculate forward / inverse differential kinematics using the geometric
% jacobians of the 3 Ways

% p is a vector in the taskspace (here simplified) (x;y;z) 3 rows
% q is a vector in the joint space (theta0;theta1;theta2; a0; ....) 23 rows

% p in taskspace (x,y,z) rotation is left out.
% q in jointspace (theta0 in all 3 ways --> 3 times)
%(theta0;a0;...;d0; theta0; theta1; a1_1; ...; d1_2; theta0; theta2; a2_1; ...; d2_2);

% input: out from simulink simulation. used for verification of said sim. 

disp('setup symbolic vars');
% setup variables
syms theta0; % symbolic value for MCS00 joint
syms a0 b0 c0 d0;
syms theta1 a1_1 b1_1 c1_1 d1_1 a1_2 b1_2 c1_2 d1_2;
syms theta2 a2_1 b2_1 c2_1 d2_1 a2_2 b2_2 c2_2 d2_2;

symvars = {theta0,a0, b0, c0, d0, theta1, a1_1, b1_1, c1_1, d1_1, a1_2, b1_2, c1_2, d1_2, theta2, a2_1, b2_1, c2_1, d2_1, a2_2, b2_2, c2_2, d2_2};

disp('get jacobians')
% get jacobians
[jacobianWay0, jacobianWay1, jacobianWay2] = WayJacobians(symvars);
disp(jacobianWay0);
disp('fit jacobians')
%fit jacobian dimensions --> fill with zeros
[J0_fit,J1_fit,J2_fit] = fitJacobianMatrixDimensions(jacobianWay0,jacobianWay1,jacobianWay2);

% storages for use in plotting
ALL_SIM_P_DOT = [];
ALL_CALC_P_DOT_0 = [];
ALL_CALC_P_DOT_1 = [];
ALL_CALC_P_DOT_2 = [];
ALL_ERROR_0 = [];
ALL_ERROR_1 = [];
ALL_ERROR_2 = [];

%for index= 1:out.MCS00_joint_velocity.get('Length')
iterationMax = min([30,out.MCS00_joint.get('Length')]);
for index= 1:iterationMax
    % use numeric approach: calc control matrix with numeric values instead of
    % symbolic for each step
    [sim_p_dot,sim_q_dot,sim_q] = getSimulatedValues(out,index); % get substitute values from simulation
    
    J0_fit_num = subs(J0_fit,transpose([theta0, theta1, theta2, a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]),sim_q); % substitute those
    J0_fit_num = double(J0_fit_num); % convert from symbolic to numeric
    J1_fit_num = subs(J1_fit,transpose([theta0, theta1, theta2, a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]),sim_q); % substitute those
    J1_fit_num = double(J1_fit_num); % convert from symbolic to numeric
    J2_fit_num = subs(J2_fit,transpose([theta0, theta1, theta2, a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]),sim_q); % substitute those
    J2_fit_num = double(J2_fit_num); % convert from symbolic to numeric


    % closingMat * q = 0; used to determine control matrix
    % closingMat * (q_!control; q_control) == 0
    closingMat = [J0_fit_num-J1_fit_num; J1_fit_num-J2_fit_num; J2_fit_num-J0_fit_num];

    % split closingMat in a part which can be controlled, and a part which can
    % not. 
    cM_control = closingMat(:,1:3); % 9x3
    cM_notControl = closingMat(:,4:23); % 9x20  

%     disp('controlMat:');
%     disp(cM_control);
    %[U,S,V] = svd(cM_notControl)

    %disp("Starting minimizing closingEQ")
    options = optimoptions(@fmincon,'OptimalityTolerance',10^-10,'StepTolerance',10^-10,'display','off'); % some options for more precise solution
    %[OptVals,fval,~,output] = fminunc(@closingEquation,simVals,options)

    clE = @(q_nC_dot)closingEquation(q_nC_dot, sim_q_dot(1:3), cM_notControl, cM_control);
    constraints = @(q_nC_dot)differentialConstrainsQuaternions(q_nC_dot,sim_q);
    
%     q_nC_dot_quess = ones(20,1).*0.25;
    q_nC_dot_quess = zeros(20,1);
    [q_nC_dot_OPT,fval,~,output] = fmincon(clE,q_nC_dot_quess,[],[],[],[],[],[],constraints,options);
%     disp('index: ');
%     disp(index);
%     disp('q_nC_dot_calc: ');
    disp(transpose(q_nC_dot_OPT));

    % forward diff kinematics: d/dt p = inv(Ones)*Jac* d/dt q, 
    % p is coord in taskspace, q is joint values
    %disp('   ');
    %disp(size([sim_q_dot(1:3);q_nC_dot_OPT]));
    p_dot_calc_0 = J0_fit_num * [sim_q_dot(1:3);q_nC_dot_OPT];
    p_dot_calc_1 = J1_fit_num * [sim_q_dot(1:3);q_nC_dot_OPT];
    p_dot_calc_2 = J2_fit_num * [sim_q_dot(1:3);q_nC_dot_OPT];
    
    
    
%     disp('Simulation| MatLab W0| Error sim - Matlab: ');
%     disp([sim_p_dot,p_dot_calc_0 ,sim_p_dot - p_dot_calc_0]);
%     disp('Simulation| MatLab W1| Error sim - Matlab: ');
%     disp([sim_p_dot,p_dot_calc_1 ,sim_p_dot - p_dot_calc_1]);
%     disp('Simulation| MatLab W2| Error sim - Matlab: ');
%     disp([sim_p_dot,p_dot_calc_2 ,sim_p_dot - p_dot_calc_2]);
    
    ALL_SIM_P_DOT = [ALL_SIM_P_DOT,sim_p_dot];
    ALL_CALC_P_DOT_0 = [ALL_CALC_P_DOT_0,p_dot_calc_0];
    ALL_CALC_P_DOT_1 = [ALL_CALC_P_DOT_1,p_dot_calc_0];
    ALL_CALC_P_DOT_2 = [ALL_CALC_P_DOT_2,p_dot_calc_0];
    ALL_ERROR_0 = [ALL_ERROR_0,sim_p_dot - p_dot_calc_0];
    ALL_ERROR_1 = [ALL_ERROR_1,sim_p_dot - p_dot_calc_1];
    ALL_ERROR_2 = [ALL_ERROR_2,sim_p_dot - p_dot_calc_2];
    
    % % Inverse part
    % p_dot = [vx;vy;vz] of fcs
    % q_dot = d/dt[theta0;theta1;theta2;a0;b0;....]
    invClEWay0 = @(q_dot)inverseClosingEquation(q_dot,J0_fit_num,sim_p_dot);
    invConstr = @(q_dot)inverseDifferentialConstrainsQuaternions(q_dot,sim_q);
    
    q_dot_quess = zeros(23,1); % use zeros as guess values for minimizer
    % minimize q_dots for given p_dots
    [q_dot_Way0_OPT,fval,~,output] = fmincon(invClEWay0,q_dot_quess,[],[],[],[],[],[],invConstr,options);
    
    % minimize q_dot for the closingequation ccs --> P via the
    % way0,way1,way2 
%     q_dot_P_guess = q_dot_Way0_OPT(2:end); %cut off theta0
    
end

% let the plotting begin
disp('mean of errors:');
disp([mean((ALL_ERROR_0).^2,2),mean((ALL_ERROR_1).^2,2),mean((ALL_ERROR_2).^2,2)]);

plotting(ALL_SIM_P_DOT,ALL_CALC_P_DOT_0,ALL_CALC_P_DOT_1,ALL_CALC_P_DOT_2,ALL_ERROR_0,ALL_ERROR_1,ALL_ERROR_2);




% Residuum
end

function plotting(ALL_SIM_P_DOT,ALL_CALC_P_DOT_0,ALL_CALC_P_DOT_1,ALL_CALC_P_DOT_2,ALL_ERROR_0,ALL_ERROR_1,ALL_ERROR_2)
figure('Name','Simulated P_dot')
hold on
plot(ALL_SIM_P_DOT(1,:),'DisplayName','X_dot');
plot(ALL_SIM_P_DOT(2,:),'DisplayName','Y_dot');
plot(ALL_SIM_P_DOT(3,:),'DisplayName','Z_dot');
legend()
hold off

figure('Name','Calculated P_dot Way 0')
hold on
plot(ALL_CALC_P_DOT_0(1,:),'DisplayName','X_dot Way 0');
plot(ALL_CALC_P_DOT_0(2,:),'DisplayName','Y_dot Way 0');
plot(ALL_CALC_P_DOT_0(3,:),'DisplayName','Z_dot Way 0');
legend()
hold off

figure('Name','Calculated P_dot Way 1')
hold on
plot(ALL_CALC_P_DOT_1(1,:),'DisplayName','X_dot Way 1');
plot(ALL_CALC_P_DOT_1(2,:),'DisplayName','Y_dot Way 1');
plot(ALL_CALC_P_DOT_1(3,:),'DisplayName','Z_dot Way 1');
legend()
hold off

figure('Name','Calculated P_dot Way 2')
hold on
plot(ALL_CALC_P_DOT_2(1,:),'DisplayName','X_dot Way 2');
plot(ALL_CALC_P_DOT_2(2,:),'DisplayName','Y_dot Way 2');
plot(ALL_CALC_P_DOT_2(3,:),'DisplayName','Z_dot Way 2');
legend()
hold off

figure('Name','Errors Way 0')
hold on
plot(ALL_ERROR_0(1,:),'DisplayName','X-Error Way 0');
plot(ALL_ERROR_0(2,:),'DisplayName','Y-Error Way 0');
plot(ALL_ERROR_0(3,:),'DisplayName','Z-Error Way 0');
legend()
hold off

figure('Name','Errors Way 1')
hold on
plot(ALL_ERROR_1(1,:),'DisplayName','X-Error Way 1');
plot(ALL_ERROR_1(2,:),'DisplayName','Y-Error Way 1');
plot(ALL_ERROR_1(3,:),'DisplayName','Z-Error Way 1');
legend()
hold off

figure('Name','Errors Way 2')
hold on
plot(ALL_ERROR_2(1,:),'DisplayName','X-Error Way 2');
plot(ALL_ERROR_2(2,:),'DisplayName','Y-Error Way 2');
plot(ALL_ERROR_2(3,:),'DisplayName','Z-Error Way 2');
legend()
hold off
end

function [jacobianWay0, jacobianWay1, jacobianWay2] = WayJacobians(symvars)
% this function calculates the jacobians for the Ways 0 to 2 from the
% triped.

% JacobianWay0 = [dP_1/dtheta0, dP_1/da0, ...dP_1/dd0;... ;dP_n/dTheta0, ...]
% JacobianWay1 = [dP_1/dtheta0, dP_1/dTheta1,dP_1/da1_1 ...dP_1/dd1_1;... ;dP_n/dTheta0, ...]
% JacobianWay2 = [dP_1/dtheta0, dP_1/dTheta2,dP_1/da2_1 ...dP_1/dd2_1;... ;dP_n/dTheta0, ...]
% The lenght of P is determinened by valuesWay0/1/2, currently P = (x;y;z)

%syms theta0; % symbolic value for MCS00 joint
% jacobian for Way 0
%syms a0 b0 c0 d0;
[theta0,a0, b0, c0, d0, theta1, a1_1, b1_1, c1_1, d1_1, a1_2, b1_2, c1_2, d1_2, theta2, a2_1, b2_1, c2_1, d2_1, a2_2, b2_2, c2_2, d2_2] = symvars{:};

vW0 = valuesWay0([theta0, a0,b0,c0,d0]);
jacobianWay0 = jacobian(vW0,[theta0, a0,b0,c0,d0]);

disp(['size of jacobianWay0: (expected 3x5): ',num2str(size(jacobianWay0))]);
%disp('jacobi matrix of Way 0');
%disp(jacobianWay0);

% jacobian for Way 1
%syms theta1 a1_1 b1_1 c1_1 d1_1 a1_2 b1_2 c1_2 d1_2;
vW1 = valuesWay1([theta0,theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2]);
jacobianWay1 = jacobian(vW1,[theta0,theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2]);
disp(['size of jacobianWay1: (expected 3x10): ',num2str(size(jacobianWay1))]);
%disp('jacobi matrix of Way 1');
%disp(jacobianWay1);


% jacobian for Way 2 [theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2,theta0]
%syms theta2 a2_1 b2_1 c2_1 d2_1 a2_2 b2_2 c2_2 d2_2;
vW2 = valuesWay2([theta0,theta2, a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]);
jacobianWay2 = jacobian(vW2,[theta0,theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2]);
disp(['size of jacobianWay2: (expected 3x10): ',num2str(size(jacobianWay2))]);
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

function [J0_fit,J1_fit,J2_fit] = fitJacobianMatrixDimensions(jW0,jW1,jW2)
% this function fills the Jacobian's with zeros, such that their dimensions
% fit logically. and we can subtract them for a closing equation
% each fitted matrix looks like this:
% [dP1/dtheta0, dP1/theta1, dP1/dtheta2, dP1/da0, ... dP1/d2_2; dP2/dTheta0, ... ...]
% where as elements not contained in the way of the used jacobianWay are 0.
sizeJ0 = size(jW0); % [rows, columns] of JacobianWay0
sizeJ1 = size(jW1);
sizeJ2 = size(jW2);

%assert((sizeJ0(1) == sizeJ1(1)) && (sizeJ0(1) == sizeJ2(1)), "Jacobian rows are NOT equal!");

% expected size: 3x23 ( or rows of P x 23)
J0_fit = [jW0(:,1), zeros(sizeJ0(1),2), jW0(:,2:5), zeros(sizeJ0(1),16)];
J1_fit = [jW1(:,1:2), zeros(sizeJ1(1),5), jW1(:,3:10), zeros(sizeJ1(1),8)];
J2_fit = [jW2(:,1), zeros(sizeJ2(1),1), jW2(:,2), zeros(sizeJ2(1),12), jW2(:,3:10)];

%assert((size(J0_fit) == size(J1_fit)) && (size(J0_fit) == size(J2_fit)), "fitted Matrices dont match!" );
disp(["sizes of fitted matrices:", size(J0_fit), size(J1_fit), size(J2_fit)]);
end

function [sim_p_dot,sim_q_dot,sim_q] = getSimulatedValues(out,index)
% gets data from the simulation at a given index from the timeseries
sim_p_dot = [out.ccs_to_fcs_sensor_x_dot.getdatasamples(index); out.ccs_to_fcs_sensor_y_dot.getdatasamples(index); out.ccs_to_fcs_sensor_z_dot.getdatasamples(index)];
sim_q_dot = [out.MCS00_joint_velocity.getdatasamples(index); out.MCS01_joint_velocity.getdatasamples(index); out.MCS02_joint_velocity.getdatasamples(index)]; % todo: all joint velocities
     
    
    % 1 Value
    theta0 = out.MCS00_joint.getdatasamples(index);
    theta1 = out.MCS01_joint.getdatasamples(index); % theta1
    theta2 = out.MCS02_joint.getdatasamples(index);
    
    % setup rotation matrix from LCS0 angles, first rotate x, then y, then
    % z as specified in Matlab docu
    lcs0RotM = makeRotHomogen(rotX(out.LCS0_joint_x.getdatasamples(index))*rotY(out.LCS0_joint_y.getdatasamples(index))*rotZ(out.LCS0_joint_z.getdatasamples(index)));
    % get quaternion values for lcs0.
    [a0,b0,c0,d0,~,~,~] = getValuesfromHomogenMatrix(lcs0RotM);
    %lcs0 = num2cell(lcs0); % Matlab type magic. This is a fight against the language
    %[a0,b0,c0,d0] = lcs0{:};

    %1x4 array: quaternion
    Sperical01_1 = out.Sperical_joint01_1.getdatasamples(index); % first spherical joint of Koppelstange1 
    Sperical01_2 = out.Sperical_joint01_2.getdatasamples(index); % 2. spherical joint of Koppelstange1
    Sperical02_1 = out.Sperical_joint02_1.getdatasamples(index); % first spherical joint of Koppelstange2 
    Sperical02_2 = out.Sperical_joint02_2.getdatasamples(index); % 2. spherical joint of Koppelstange2 

    % error checks:
    if(sum([a0,b0,c0,d0].^2) ~= 1)
        disp("Achtung: |Quat-BKS| != 1")
        disp([a0,b0,c0,d0])
        disp(norm([a0,b0,c0,d0]))
    elseif (sum(Sperical01_1.^2) ~= 1)
        disp("Achtung: |Quat-Sperical01_1| != 1")
        disp(Sperical01_1)
        disp(norm(Sperical01_1))
    elseif (sum(Sperical01_2.^2) ~= 1)
        disp("Achtung: |Quat-Sperical01_2| != 1")
        disp(Sperical01_2)
        disp(norm(Sperical01_2))
    elseif (sum(Sperical02_1.^2) ~= 1)
        disp("Achtung: |Quat-Sperical02_1| != 1")
        disp(Sperical02_1)
        disp(norm(Sperical02_1))
    elseif (sum(Sperical02_2.^2) ~= 1)
        disp("Achtung: |Quat-Sperical02_2| != 1")
        disp(Sperical02_2)
        disp(norm(Sperical02_2))
    end

    Sperical01_1 = num2cell(Sperical01_1);
    Sperical01_2 = num2cell(Sperical01_2);
    Sperical02_1 = num2cell(Sperical02_1);
    Sperical02_2 = num2cell(Sperical02_2);

    [a1_1,b1_1,c1_1,d1_1] = Sperical01_1{:};
    [a1_2,b1_2,c1_2,d1_2] = Sperical01_2{:};
    [a2_1,b2_1,c2_1,d2_1] = Sperical02_1{:};
    [a2_2,b2_2,c2_2,d2_2] = Sperical02_2{:};

    sim_q = [theta0, theta1, theta2, a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2];
    sim_q = transpose(sim_q);
end


% helper functions, use if LCS data is from a gymbal joint and not spherical
function [res] = rotX(w)
res = [1,0,0; 0,cos(w),-sin(w); 0,sin(w),cos(w)];
end

function [res] = rotY(w)
res = [cos(w),0,sin(w); 0,1,0; -sin(w),0,cos(w)];
end

function [res] = rotZ(w)
res = [cos(w),-sin(w),0; sin(w),cos(w),0; 0,0,1];
end

function [c,ceq]= differentialConstrainsQuaternions(q_nC_dot,sim_q)
% make sure that solver fmincon, solves with constraint : d/dt||quati_j||
% == d1/dt
%input: sim_q = [theta0,theta1,theta2,
%a0,...,d0,a1_1,...,d1_2,a2_1,...,d2_2]. the actual joint state at this
%moment
% q_nC_dot: the variable calculated joint state which is to minimize.
% q_nC_dot = d/dt[a0,b0,c0,d0,a1_1, ...]

% the constraints are as follows: d (a(t)^2+b(t)^2+c(t)^2+d(t)^2 -1 ==
% 0)/dt
% --> 2a(t)*da(t)/dt + 2b*db/dt + ... + 0 == 0
% --> a(t)*da/dt + 2b*db/dt + ... == 0

c = []; % condition for ... <= 0

ceq0 = sim_q(4)*q_nC_dot(1)+sim_q(5)*q_nC_dot(2)+sim_q(6)*q_nC_dot(3)+sim_q(7)*q_nC_dot(4);
ceq1_1 = sim_q(8)*q_nC_dot(5)+sim_q(9)*q_nC_dot(6)+sim_q(10)*q_nC_dot(7)+sim_q(11)*q_nC_dot(8);
ceq1_2 = sim_q(12)*q_nC_dot(9)+sim_q(13)*q_nC_dot(10)+sim_q(14)*q_nC_dot(11)+sim_q(15)*q_nC_dot(12);
ceq2_1 = sim_q(16)*q_nC_dot(13)+sim_q(17)*q_nC_dot(14)+sim_q(18)*q_nC_dot(15)+sim_q(19)*q_nC_dot(16);
ceq2_2 = sim_q(20)*q_nC_dot(17)+sim_q(21)*q_nC_dot(18)+sim_q(22)*q_nC_dot(19)+sim_q(23)*q_nC_dot(20);

ceq = [ceq0;ceq1_1;ceq1_2;ceq2_1;ceq2_2];
end

function [totalError] = closingEquation(q_notControl_dot, q_control_dot, alpha_notControl, alpha_control) % for use in fminunc
% this is the closing equation for the diff Kin. in another form 
% make sure the alpha matrixes are already numeric, so substitute their
% variables ( theta0, a0, ...) with their current numerical values
%disp(["sizes: ", size(alpha_notControl), size(q_notControl_dot), size(alpha_control), size(q_control_dot)]);
%disp(["classes: ", class(alpha_notControl), class(q_notControl_dot), class(alpha_control), class(q_control_dot)]);
totalError = sum((alpha_notControl * q_notControl_dot - alpha_control * q_control_dot).^2);

end


function [c,ceq]= inverseDifferentialConstrainsQuaternions(q_dot,sim_q)
% make sure that solver fmincon, solves with constraint : d/dt||quati_j||
% == d1/dt
%input: sim_q = [theta0,theta1,theta2,
%a0,...,d0,a1_1,...,d1_2,a2_1,...,d2_2]. the actual joint state at this
%moment
% q_dot: the variable calculated joint state which is to minimize.
% q_dot = d/dt[theta0,t1,t2,a0,b0,c0,d0,a1_1, ...]

% the constraints are as follows: d (a(t)^2+b(t)^2+c(t)^2+d(t)^2 -1 ==
% 0)/dt
% --> 2a(t)*da(t)/dt + 2b*db/dt + ... + 0 == 0
% --> a(t)*da/dt + 2b*db/dt + ... == 0

c = []; % condition for ... <= 0

ceq0    = sim_q(4)*q_dot(4)   + sim_q(5)*q_dot(5)   + sim_q(6)*q_dot(6)   + sim_q(7)*q_dot(7);
ceq1_1  = sim_q(8)*q_dot(8)   + sim_q(9)*q_dot(9)   + sim_q(10)*q_dot(10)  + sim_q(11)*q_dot(11);
ceq1_2  = sim_q(12)*q_dot(12) + sim_q(13)*q_dot(13) + sim_q(14)*q_dot(14) + sim_q(15)*q_dot(15);
ceq2_1  = sim_q(16)*q_dot(16) + sim_q(17)*q_dot(17) + sim_q(18)*q_dot(18) + sim_q(19)*q_dot(19);
ceq2_2  = sim_q(20)*q_dot(20) + sim_q(21)*q_dot(21) + sim_q(22)*q_dot(22) + sim_q(23)*q_dot(23);

ceq = [ceq0;ceq1_1;ceq1_2;ceq2_1;ceq2_2];
end

function [totalError] = inverseClosingEquation(q_dot,numericJacobianMat,p_dot)
%closingEquation for the inverse diffkin. we minimize q_dot
totalError = p_dot - numericJacobianMat*q_dot;
end
