function [res] = quatRotM(a,b,c,d) %%Todo: use a,b,c,d as inputs
    % this function calculates the quaternion rotation matrix for given
    % vector (kx,ky,kz) and angle theta
    %res = quat2rotm(quaternion(cos(theta/2), kx*sin(theta/2), ky*sin(theta/2), kz*sin(theta/2)));
    %syms a b c d;
    % normalize Vector(kx,ky,kz)
    %kx = kx /norm([kx; ky; kz]);
    %ky = ky /norm([kx; ky; kz]);
    %kz = kz /norm([kx; ky; kz]);
    % taken from astromech
    %a = cos(theta/2);
    %b = kx*sin(theta/2);
    %c = ky*sin(theta/2);
    %d = kz*sin(theta/2);
    %taken from wikipedia the quaternion-derived rotation matrix, with
    %substitues a = q_r, b = q_i ...
    res = [1-2*(c^2+d^2) 2*(b*c-d*a) 2*(b*d + c*a); 2*(b*c + d*a) 1-2*(b^2+d^2) 2*(c*d - b*a); 2*(b*d-c*a) 2*(c*d+b*a) 1-2*(b^2+c^2) ];
end