% notes to solving closing equation

% values for theta are given,
theta1 = -10 * pi / 180;
theta2 = -theta1;

syms a0 b0 c0 d0; % variables for joint at BKS

syms a1_1 b1_1 c1_1 d1_1; % MKS1: 1.st spherical joint 
syms a1_2 b1_2 c1_2 d1_2; % MKS1: 2.nd spherical joint

syms a2_1 b2_1 c2_1 d2_1; % MKS2: 1.st spherical joint
syms a2_2 b2_2 c2_2 d2_2; % MKS2: 2.nd spherical joint

%assumption: all variables are real numbers
assume([a0 b0 c0 d0 a1_1 b1_1 c1_1 d1_1 a1_2 b1_2 c1_2 d1_2 a2_1 b2_1 c2_1 d2_1 a2_2 b2_2 c2_2 d2_2],'real');

% assumption: all quaternions have norm(quat) == 1
assumeAlso(a0^2 + b0^2 + c0^2 + d0^2 == 1);
assumeAlso(a1_1^2+b1_1^2+c1_1^2+d1_1^2 == 1);
assumeAlso(a1_2^2+b1_2^2+c1_2^2+d1_2^2 == 1);
assumeAlso(a2_1^2+b2_1^2+c2_1^2+d2_1^2 == 1);
assumeAlso(a2_2^2+b2_2^2+c2_2^2+d2_2^2 == 1);

Weg0M = Weg0(a0,b0,c0,d0); % create Matrices for the 3 paths
Weg1M = Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2);
Weg2M = Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2);
