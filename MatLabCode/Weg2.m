function [Weg2Mat] = Weg2(theta2)
%{ TODO: put CORRECT values!! %} 
% input: the Angle theta between the x-Axis of the MKS and the joint in
% radians

if ~exist('theta2','var')
    syms theta2;
end

syms a2_1 b2_1 c2_1 d2_1; % Values for the Quaternion of the First spherical joint of the Koppelstange
syms a2_2 b2_2 c2_2 d2_2; % same but for the 2nd joint of the Koppelstange

% Transformation: HKS --> MKS02 [Chassis]
A1 = homogenTranslationMat(0.1398,-0.055,-0.051);
angle_HKS_to_MKS02 = -21.4745 * pi / 180; % the angle between the x-Axes from the HKS and the MKS02 [for theta = 0], as seen in the simulink model
                                            % todo: see if sym(pi) makes a difference
A2 = makeRotHomogen(quatRotM(cos(angle_HKS_to_MKS02 /2),0,0,sin(angle_HKS_to_MKS02/2))); % quaternion matrix for rotation about z-axis

% Transformation MKS02 --> Koppelstange2_1 (1. Spherical Joint der
% Koppelstange) [Antriebshebel]
A3 = makeRotHomogen(quatRotM(cos(theta2 /2),0,0,sin(theta2 /2))); % quaternion rotation matrix for a rotation about theta [radians] about the MKS-joint-z-axis
A4 = homogenTranslationMat(0.085,0,-0.0245);

% Transformation KS2_1 --> KS1_2 (1. --> 2. Spherical Joint) [Koppelstange]
A5 = makeRotHomogen(quatRotM(a2_1, b2_1, c2_1, d2_1));
A6 = homogenTranslationMat(0.11,0,0);

% Transformation KS2_2 --> P (gemeinsamer EndPunkt aller Wege) [Antriebsmodul]
A7 = makeRotHomogen(quatRotM(a2_2, b2_2, c2_2, d2_2));
A8 = homogenTranslationMat(-0.015,0.029,0.0965);

% Gesamt Transformationsmatrix
Weg2Mat = A1*A2*A3*A4*A5*A6*A7*A8;
end