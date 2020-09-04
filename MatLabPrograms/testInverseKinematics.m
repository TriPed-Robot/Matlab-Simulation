function [transfM] = testInverseKinematics(out)
% test inv kinemtaics buy using a transf measured by the simscape model:   
% ccs--> fcs

% iterationMax = min([100,out.MCS00_joint.get('Length')]);
iterationMax = out.MCS00_joint.get('Length');
% storages for values, used for plotting
ALL_CALC_THETA_0 = zeros(1,iterationMax);
ALL_CALC_THETA_1 = zeros(1,iterationMax);
ALL_CALC_THETA_2 = zeros(1,iterationMax);

ALL_SIM_THETA_0 = zeros(1,iterationMax);
ALL_SIM_THETA_1 = zeros(1,iterationMax);
ALL_SIM_THETA_2 = zeros(1,iterationMax);


for index = 1:iterationMax
    disp('iteration: ');
    disp(index);
    transfM1 = homogenTranslationMat(out.ccs_to_fcs_sensor_x.getdatasamples(index),out.ccs_to_fcs_sensor_y.getdatasamples(index),out.ccs_to_fcs_sensor_z.getdatasamples(index));

    quatVals = num2cell(out.ccs_to_fcs_sensor_quaternion.getdatasamples(index));
    [a,b,c,d] = quatVals{:};
    transfM2 =  makeRotHomogen(quatRotM(a,b,c,d));
    transfM = transfM1 * transfM2;
%     disp('desired Transformation')
%     disp(transfM);
    [theta0,theta1, theta2] = inverseKinematics(transfM,out.MCS00_joint.getdatasamples(index));
    % disp(['thetas0,1,2: ', num2str(theta0 * 180/pi), ' ', num2str(theta1 * 180/pi), ' ', num2str(theta2 * 180/pi), ' ',]);
%     disp(['actual thetas:', out.MCS00_joint.getdatasamples(index),out.MCS02_joint.getdatasamples(index),out.MCS02_joint.getdatasamples(index)])
    
    ALL_CALC_THETA_0(index) = theta0;
    ALL_CALC_THETA_1(index) = theta1;
    ALL_CALC_THETA_2(index) = theta2;
    
    ALL_SIM_THETA_0(index) = out.MCS00_joint.getdatasamples(index);
    ALL_SIM_THETA_1(index) = out.MCS01_joint.getdatasamples(index);
    ALL_SIM_THETA_2(index) = out.MCS02_joint.getdatasamples(index);
end
disp('mean Error^2: theta0, 1, 2');
disp([mean((ALL_CALC_THETA_0-ALL_SIM_THETA_0).^2),mean((ALL_CALC_THETA_1-ALL_SIM_THETA_1).^2),mean((ALL_CALC_THETA_2-ALL_SIM_THETA_2).^2)]);


figure('Name','Simulated Thetas')
hold on
plot(ALL_SIM_THETA_0,'DisplayName','SIM Theta 0');
plot(ALL_SIM_THETA_1,'DisplayName','SIM Theta 0');
plot(ALL_SIM_THETA_2,'DisplayName','SIM Theta 0');
legend()
hold off

figure('Name','Calculated Thetas')
hold on
plot(ALL_CALC_THETA_0,'DisplayName','CALC Theta 0');
plot(ALL_CALC_THETA_1,'DisplayName','CALC Theta 0');
plot(ALL_CALC_THETA_2,'DisplayName','CALC Theta 0');
legend()
hold off

end