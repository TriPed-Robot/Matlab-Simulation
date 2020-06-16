%function [equation,totalError,PosError,RotError] = closingEquation(A,B,C)
function [equation] = closingEquation(A,B,C)
% this function returns the value of the closinmg equation for this Robot
%Input: TransformMatrices A,B,C of the 3 paths

equation = [A-B;B-C;C-A] == zeros(3*4,4); %% closure Equation. this is a LGS with 12 equations

% get relevant Values from the Matrices
[Aa, Ab,Ac,Ad, Ax,Ay,Az] = getValuesfromHomogenMatrix(A);
[Ba, Bb,Bc,Bd, Bx,By,Bz] = getValuesfromHomogenMatrix(B);
[Ca, Cb,Cc,Cd, Cx,Cy,Cz] = getValuesfromHomogenMatrix(C);

% evaluate closure Equation: ||A-B||^2 + ||A-C|| ^2 + ||B-C||^2
% we use the values from the matrices: (Ax-Bx)^2 + (Ay-By)^2 + (Az-Bz)^2
% + (Ax-Cx)^2 + ... + (Bx-Cx)^2 + ...
% as evaluation for the position error between the paths
Apos = [Ax;Ay;Az];
Bpos = [Bx;By;Bz];
Cpos = [Cx;Cy;Cz];
PosError = sum((Apos-Bpos).^2 + (Apos-Cpos).^2 + (Bpos-Cpos).^2);

Arot = [Aa, Ab,Ac,Ad];
Brot = [Ba, Bb,Bc,Bd];
Crot = [Ca, Cb,Cc,Cd];

% for the rotational error we check the parts of the quaternions which
% describe the rotation for each path
% TODO: I'm not sure if they show errors where there are none though.
RotError = sum((Arot-Brot).^2 + (Arot-Crot).^2 + (Brot-Crot).^2);

totalError = PosError + RotError;

end