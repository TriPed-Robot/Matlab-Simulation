function [a,b,c,d, x,y,z] = getValuesfromHomogenMatrix(A)
    % this function returns the Vector by which a homogenous
    % Transformationmatrix shifts a Point
    x = A(1,4);
    y = A(2,4);
    z = A(3,4);

    %as well as the Values of the Quaternion describing the rotation
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
    
    % todo: gib a,b,c,d aus und nicht theta kx ky kz
    %theta = 2 * acos(a);
    %kx = b/(sin(theta/2));
    %ky = c/(sin(theta/2));
    %kz = d/(sin(theta/2));
    
end