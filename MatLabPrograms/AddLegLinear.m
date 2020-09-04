function [ALeg] = AddLegLinear(A,theta0)
% this functions adds transformations from the Point P; which is the
% Endpoint from Weg0,1,2; to the FKS at the LegLinear part.
%{
Inputs:
A: Transformationmatrix, which describes Transformation from HKS to P, Use
Weg0.m for that.
theta0: angle [radians] for joint at MKS00
%}

A1 = homogenTranslationMat(1.640, 0, -0.037); % transform P to P0 (center of LegLinear rotation)

theta0 = -1* theta0 * 0.07/(2*pi*1.5); % gear constraint: transfrom theta at MKS00 to theta around P0, gear ratio is 0.07/(2*pi*1.5) [circumferences of the gears MCS00 / LL]
startingvalue = -15 * pi/180;
theta0 = theta0 + startingvalue; %offset, depending on which position the Leg is for theta at MKS00 is 0
A2 = makeRotHomogen(quatRotM(cos(theta0/2),0,sin(theta0/2),0)); % rotate theta [radians] around y-axis of P0
% disp('theta0 quatertnion');
% disp([cos(theta0/2),0,sin(theta0/2),0]);
% disp(norm([cos(theta0/2),0,sin(theta0/2),0]));

A3 = homogenTranslationMat(-1.500,0,0); %transform from P0-joint to FKS

ALeg = A*A1*A2*A3;
end