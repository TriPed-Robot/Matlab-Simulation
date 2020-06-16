syms f(a,d,alpha,theta)
f(a,d,alpha,theta) = [cos(theta), -sin(theta)*cos(alpha), sin(theta)*sin(alpha), a*cos(theta); sin(theta),cos(theta)*cos(alpha),-cos(theta)*sin(alpha),a*sin(theta); 0, sin(alpha), cos(alpha),d; 0,0,0,1]
 
% this function calculates the homogenous transformation Matrix A in
% Dennavit Hartenberg convention

% input
% a
% d
% alpha
% theta
end

