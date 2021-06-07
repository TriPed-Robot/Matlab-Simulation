function test_getDatafromSim_with_and_without_simulation_data(out)
% this function test the difference in finding the minimized closingEq
% joint parameters by guessing or using the simulation data

[Weg0m_guessed,Weg1m_guessed,Weg2m_guessed] = getDatafromSim(); % make sure the theta1/2 are set correctly in getDatafromSim
[Weg0m,Weg1m,Weg2m] = getDatafromSim(out); % optimal matrices using the simulation data as START point, != matrices from sim data
disp('Weg 0 difference (guessed - sim)');
disp(Weg0m_guessed-Weg0m);
disp('Weg 1 difference (guessed - sim)');
disp(Weg1m_guessed-Weg1m);
disp('Weg 2 difference (guessed - sim)');
disp(Weg2m_guessed-Weg2m);

% get transfrom values from Ways, to check errors
Weg0m_guessedVars = getValuesfromHomogenMatrix(Weg0m_guessed); % [a,b,c,d, x,y,z] ( quaternion, pos)
Weg1m_guessedVars = getValuesfromHomogenMatrix(Weg1m_guessed);
Weg2m_guessedVars = getValuesfromHomogenMatrix(Weg2m_guessed);
Weg0m_Vars = getValuesfromHomogenMatrix(Weg0m);
Weg1m_Vars = getValuesfromHomogenMatrix(Weg1m);
Weg2m_Vars = getValuesfromHomogenMatrix(Weg2m);

Error_guessed_0_1 = norm(Weg0m_guessedVars-Weg1m_guessedVars); %  error between the a,b,c... from the guessed ways
Error_guessed_0_2 = norm(Weg0m_guessedVars-Weg2m_guessedVars);
Error_guessed_1_2 = norm(Weg1m_guessedVars-Weg2m_guessedVars); 

Error_sim_0_1 = norm(Weg0m_Vars-Weg1m_Vars);
Error_sim_0_2 = norm(Weg0m_Vars-Weg2m_Vars);
Error_sim_1_2 = norm(Weg1m_Vars-Weg2m_Vars);

disp(['Error between guessed Ways 0 and 1: ',num2str(Error_guessed_0_1)]);
disp(['Error between guessed Ways 0 and 2: ',num2str(Error_guessed_0_2)]);
disp(['Error between guessed Ways 1 and 2: ',num2str(Error_guessed_1_2)]);

disp(['Error between sim Ways 0 and 1: ',num2str(Error_sim_0_1)]);
disp(['Error between sim Ways 0 and 2: ',num2str(Error_sim_0_2)]);
disp(['Error between sim Ways 1 and 2: ',num2str(Error_sim_1_2)]);



end