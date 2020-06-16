function [Weg0Mat] = Weg0()

%{
%syms a1 b1 c1 d1
%A1 = homogenTranslationMat(0.265,0,0.014);
a1 = 1/2;
b1 = 1/2;
c1 = 1/2;
d1 = 1/2;

A = makeRotHomogen(quatRotM(a1,b1,c1,d1))


 R = A(1:3,1:3); % get Rot mat from homogen Mat
    %quati = rotm2quat(R); % convert to quaternion
    %quati = quaternion(quati);
    %[a,b,c,d] = parts(quati); % get parts from quaternion
    
    t = R(1,1)+R(2,2)+R(3,3);
    r = sqrt(1+t);
    s = 1/(2*r);
    a = 1/2 * r;
    b = (R(3,2)-R(2,3))*s;
    c = (R(1,3)-R(3,1))*s;
    d= (R(2,1)-R(1,2))*s;
    
    Error = (a1-a)^2 + (b1-b)^2 + (c1-c)^2 + (d1-d)^2 
%}
syms a0 b0 c0 d0; %% variables for the spherical joint quaternion at the BKS

A1 = homogenTranslationMat(0.265,0,0.014);
A2 = makeRotHomogen(quatRotM(a0,b0,c0,d0));

Weg0Mat = A1 * A2;

end