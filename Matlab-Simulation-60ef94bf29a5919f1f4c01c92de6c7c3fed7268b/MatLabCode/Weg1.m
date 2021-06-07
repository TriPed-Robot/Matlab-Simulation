function [Weg1Mat] = Weg1(theta1)
% input: the Angle theta between the x-Axis of the MKS and the joint in
% radians

if ~exist('theta1','var')
    syms theta1;
end

syms a1_1 b1_1 c1_1 d1_1; % Values for the Quaternion of the First spherical joint of the Koppelstange
syms a1_2 b1_2 c1_2 d1_2; % same but for the 2nd joint of the Koppelstange

% Transformation: HKS --> MKS01 [Chassis]
A1 = homogenTranslationMat(0.1398,0.055,-0.051);
angle_HKS_to_MKS01 = 21.4745 * pi / 180; % the angle between the x-Axes from the HKS and the MKS01 [for theta = 0], as seen in the simulink model
                                            % todo: see if sym(pi) makes a difference
A2 = makeRotHomogen(quatRotM(cos(angle_HKS_to_MKS01/2),0,0,sin(angle_HKS_to_MKS01/2))); % quaternion matrix for rotation about z-axis

% Transformation MKS01 --> Koppelstange1_1 (1. Spherical Joint der
% Koppelstange) [Antriebshebel]
A3 = makeRotHomogen(quatRotM(cos(theta1 /2),0,0,sin(theta1 /2))); % quaternion rotation matrix for a rotation about theta [radians] about the MKS-joint-z-axis
A4 = homogenTranslationMat(0.085,0,-0.0245);

% Transformation KS1_1 --> KS1_2 (1. --> 2. Spherical Joint) [Koppelstange]
A5 = makeRotHomogen(quatRotM(a1_1, b1_1, c1_1, d1_1));
A6 = homogenTranslationMat(0.11,0,0);

% Transformation KS1_2 --> P (gemeinsamer EndPunkt aller Wege) [Antriebsmodul]
A7 = makeRotHomogen(quatRotM(a1_2, b1_2, c1_2, d1_2));
A8 = homogenTranslationMat(-0.015,-0.029,0.0965);

% Gesamt Transformationsmatrix
Weg1Mat = A1*A2*A3*A4*A5*A6*A7*A8;
end