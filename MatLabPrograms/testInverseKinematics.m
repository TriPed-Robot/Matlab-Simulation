function [transfM] = testInverseKinematics(out)
% test inv kinemtaics buy using a transf measured by the simscape model:   
% ccs--> fcs
% use a single step sim.
%{
a0 = ;
b0 = ;
c0 = ;
d0 = ;
theta0 = ;
transfM = Weg0(a0,b0,c0,d0);
transfM = AddLegLinear(transfM,theta0);
%}
transfM1 = homogenTranslationMat(out.ccs_to_fcs_sensor_x.get('Data'),out.ccs_to_fcs_sensor_y.get('Data'),out.ccs_to_fcs_sensor_z.get('Data'));

quatVals = num2cell(out.ccs_to_fcs_sensor_quaternion.get('Data'));
[a,b,c,d] = quatVals{:};
transfM2 =  makeRotHomogen(quatRotM(a,b,c,d));
transfM = transfM1 * transfM2;
disp('desired Transformation')
disp(transfM);
[theta0,theta1, theta2] = inverseKinematics(transfM);
disp(['thetas0,1,2: ', num2str(theta0 * 180/pi), ' ', num2str(theta1 * 180/pi), ' ', num2str(theta2 * 180/pi), ' ',]);

end