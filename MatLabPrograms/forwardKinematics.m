%function [Weg0m, Weg1m, Weg2m] = forwardKinematics(out)
function forwardKinematics(out)
% this only works if the triped was simulated
% call: getDatafromSim(out)


iterationMaximum = min([30,out.MCS00_joint.get('Length')]);

ALL_actual_pos = zeros(3,iterationMaximum);
ALL_calc_pos = zeros(3,iterationMaximum);
ALL_LCS0_pos = zeros(4,iterationMaximum);
for index = 1:iterationMaximum
    
    if exist('out','var') % check if Data from Simscape is given
         % try to minimize closingEquation using guessed data from Simscape
        % simulation
        disp("using Simscape-Simulation output as guess")
        % 1 Value
        mcs01 = out.MCS01_joint.getdatasamples(index); % theta1
        mcs02 = out.MCS02_joint.getdatasamples(index);

        % 1x3 Array with Values for rot around x,y,z Axis from BKS joint

        % %bks0 = out.BKS0_joint.get('Data'); % test with spherical joint as BKS

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

        % setup values for inserting into Weg-functions
        theta1 = mcs01;
        theta2 = mcs02;

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

        % thetas will be constant!, vary all else to min closingEq
        simVals = [a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2];

    else
        % try to find minimum without help from simulation
        % use guessed variables somewhere near the right area, for ease of
        % finding a solution
        disp("using guessed variables")
        simVals = [0.9961, -0.0000, -0.0893, 0.0000, 0.8135, 0.0244, -0.0019, -0.5821, 0.9338, 0.0064, -0.0889, 0.3413, 0.8135, -0.0245, -0.0019, 0.5821, -0.9338, 0.0064, 0.0889, 0.3413];


        % IMPORTANT  
        %give the ACTUAL values for the angles of the mcs01/02 joints
        theta1 = 10 * pi / 180;
        theta2 = -10 * pi / 180;
        % IMPORTANT
    end


    disp("Starting minimizing closingEQ")
    options = optimoptions(@fmincon,'OptimalityTolerance',10^-10,'StepTolerance',10^-10,'display','off'); % some options for more precise solution
    %[OptVals,fval,~,output] = fminunc(@closingEquation,simVals,options)
    clE = @(guessedVals)closingEquation(guessedVals,theta1,theta2);
    constraints = @(guessedVals)constrainsWays0_1_2(guessedVals);
    [OptVals,fval,~,output] = fmincon(clE,simVals,[],[],[],[],[],[],constraints,options);
    %[OptVals,fval,exitflag,output] = fminsearch(@closingEquation,simVals)
    %[OptVals,fval,exitflag,output] = fminunc(@closingEquation,simVals)

% %     if exist('out','var') %  only show difference to simulated Values, if they exist.
% %         Error = OptVals-simVals;
% %         disp('the Error between the calculated Values and the simulation values is:');
% %         disp(Error);
% %     end
    OptVals = num2cell(OptVals);
    [a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2] = OptVals{:};
    ALL_LCS0_pos(:,index) = [a0;b0;c0;d0];
    %Error = OptVals-simVals

    Weg0m = Weg0(a0,b0,c0,d0);

    theta0 = out.MCS00_joint.getdatasamples(index);
    Weg0m_complete = AddLegLinear(Weg0m,theta0);
    % actualPos = homogenTranslationMat(out.ccs_to_fcs_sensor_x.get('Data'),out.ccs_to_fcs_sensor_y.get('Data'),out.ccs_to_fcs_sensor_z.get('Data'));

    % [a,b,c,d] = out.ccs_to_fcs_sensor_quaternion.get('Data');
    % % [a,b,c,d]= quat.parts();
    % actualRot = makeRotHomogen(a,b,c,d);
% %     disp('actual');
% %     disp([out.ccs_to_fcs_sensor_x.getdatasamples(index),out.ccs_to_fcs_sensor_y.getdatasamples(index),out.ccs_to_fcs_sensor_z.getdatasamples(index)]);
% %     disp('calc')
    [~,~,~,~, x,y,z] =getValuesfromHomogenMatrix(Weg0m_complete);
% %     disp([x,y,z]);
% %     disp('----')
% % 
% %     Weg1m = Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2);
% %     Weg2m = Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2);
% %     disp('Transformationsmatrix: Weg 0 (LCS0)');
% %     disp(Weg0m);
% %     disp('Transformationsmatrix: Weg 1 (MCS01)');
% %     disp(Weg1m);
% %     disp('Transformationsmatrix: Weg 2 (MCS02)');
% %     disp(Weg2m);

    ALL_actual_pos(:,index) = [out.ccs_to_fcs_sensor_x.getdatasamples(index);out.ccs_to_fcs_sensor_y.getdatasamples(index);out.ccs_to_fcs_sensor_z.getdatasamples(index)];
    ALL_calc_pos(:,index) = [x;y;z];
    
    

end

figure('Name','Simulated P')
hold on
% plot(ALL_SIM_P_DOT(1,:),'DisplayName','X');
plot3(ALL_actual_pos(1,:),ALL_actual_pos(2,:),ALL_actual_pos(3,:));
xlabel('x');
ylabel('y');
zlabel('z');
hold off

figure('Name','Calculated P')
hold on
plot3(ALL_calc_pos(1,:),ALL_calc_pos(2,:),ALL_calc_pos(3,:));
xlabel('x');
ylabel('y');
zlabel('z');
hold off

figure('Name','Calculated P 2')
hold on
plot(ALL_calc_pos(1,:),'DisplayName','X');
plot(ALL_calc_pos(2,:),'DisplayName','Y');
plot(ALL_calc_pos(3,:),'DisplayName','Z');
legend()
hold off

figure('Name','Sim P 2')
hold on
plot(ALL_actual_pos(1,:),'DisplayName','X');
plot(ALL_actual_pos(2,:),'DisplayName','Y');
plot(ALL_actual_pos(3,:),'DisplayName','Z');
legend()
hold off

figure('Name','Sim - Calc')
hold on
plot(ALL_actual_pos(1,:) - ALL_calc_pos(1,:),'DisplayName','X');
plot(ALL_actual_pos(2,:)  - ALL_calc_pos(2,:),'DisplayName','Y');
plot(ALL_actual_pos(3,:)  - ALL_calc_pos(3,:),'DisplayName','Z');
legend()
hold off

figure('Name','||Sim - Calc||')
hold on
% plot(ALL_actual_pos(1,:) - ALL_calc_pos(1,:),'DisplayName','X');
% plot(ALL_actual_pos(2,:)  - ALL_calc_pos(2,:),'DisplayName','Y');
% plot(ALL_actual_pos(3,:)  - ALL_calc_pos(3,:),'DisplayName','Z');
plot(vecnorm(ALL_actual_pos - ALL_calc_pos))
legend()
hold off

disp('gymbal joint LCS0 values');
    disp([out.LCS0_joint_x.get('Data');out.LCS0_joint_y.get('Data');out.LCS0_joint_z.get('Data')]);
    

disp('calc LCS0');
disp(ALL_LCS0_pos);
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


function [c,ceq]= constrainsWays0_1_2(x)
% make sure that solver fmincon, solves with constraint : ||quati_j|| == 1
%input: x = [a0,...,d0,a1_1,...,d1_2,a2_1,...,d2_2].
c = []; % condition for ... <= 0
ceq0 = x(1)^2+x(2)^2+x(3)^2+x(4)^2 - 1; % condition for ||quat0|| == 1
ceq1_1 = x(5)^2+x(6)^2+x(7)^2+x(8)^2 - 1; % condition for ||quat1_1|| == 1
ceq1_2 = x(9)^2+x(10)^2+x(11)^2+x(12)^2 - 1; % condition for ||quat1_2|| == 1
ceq2_1 = x(13)^2+x(14)^2+x(15)^2+x(16)^2 - 1; % condition for ||quat2_1|| == 1
ceq2_2 = x(17)^2+x(18)^2+x(19)^2+x(20)^2 - 1; % condition for ||quat2_2|| == 1
ceq = [ceq0;ceq1_1;ceq1_2;ceq2_1;ceq2_2];
end