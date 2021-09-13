% This script converts the .mat files generated by TriP_test.slx into
% usable csv files.
% These can then be used by TriP to validate the TriPed model. 
% For this they have to be copied into the
% tests/experiments/triped/reference_solution directory 

endeffector = load('endeffector_coordinates.mat');
array = endeffector.ans.Data(2:20,:);
csvwrite('endeffector_coordinates.csv',array)



joint_val = load('endeffector_coordinates.mat');
array = joint_val.ans.Data(2:20,:);
csvwrite('joint_values.csv',array)