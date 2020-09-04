%function [totalError,PosError,RotError] = closingEquation(A,B,C)
%function [totalError] = closingEquation(A,B,C)

function [totalError] = closingEquation(GUESSEDVALS,theta1,theta2) % for use in fminunc

GUESSEDVALS = num2cell(GUESSEDVALS);
%[a0,b0,c0,d0,theta1,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2] = GUESSEDVALS{:};
[a0,b0,c0,d0,a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2] = GUESSEDVALS{:};

% set const values for theta. These can be taken from the simulation, but
% not given to closingEq() as variables, do to fminunc changing them


% this function returns the value of the closing equation for this Robot
%Input: TransformMatrices A,B,C of the 3 paths
A = Weg0(a0,b0,c0,d0);
B = Weg1(theta1, a1_1,b1_1,c1_1,d1_1, a1_2,b1_2,c1_2,d1_2);
C = Weg2(theta2,a2_1,b2_1,c2_1,d2_1, a2_2,b2_2,c2_2,d2_2);


%equation = [A-B;B-C;C-A] == zeros(3*4,4); %% closure Equation. this is a LGS with 12 equations

% get relevant Values from the Matrices
[Aa,Ab,Ac,Ad, Ax,Ay,Az] = getValuesfromHomogenMatrix(A);
[Ba,Bb,Bc,Bd, Bx,By,Bz] = getValuesfromHomogenMatrix(B);
[Ca,Cb,Cc,Cd, Cx,Cy,Cz] = getValuesfromHomogenMatrix(C);

% evaluate closure Equation: ||A-B||^2 + ||A-C|| ^2 + ||B-C||^2
% we use the values from the matrices: (Ax-Bx)^2 + (Ay-By)^2 + (Az-Bz)^2
% + (Ax-Cx)^2 + ... + (Bx-Cx)^2 + ...
% as evaluation for the position error between the paths
Apos = [Ax;Ay;Az];
Bpos = [Bx;By;Bz];
Cpos = [Cx;Cy;Cz];
%PosError = sum((Apos-Bpos).^2 + (Apos-Cpos).^2 + (Bpos-Cpos).^2);
PosError = [Apos-Bpos;Bpos-Cpos;Cpos-Apos];

Arot = [Aa;Ab;Ac;Ad];
Brot = [Ba;Bb;Bc;Bd];
Crot = [Ca;Cb;Cc;Cd];

% for the rotational error we check the parts of the quaternions which
% describe the rotation for each path
% TODO: I'm not sure if they show errors where there are none though.
%RotError = sum((Arot-Brot).^2 + (Arot-Crot).^2 + (Brot-Crot).^2);
RotError = [Arot-Brot;Brot-Crot;Crot-Arot];

%totalError = PosError + RotError;
totalError = [PosError;RotError];
%totalError = norm(totalError)^2;
totalError = sum(totalError.^2);
end