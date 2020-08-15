function [x,y,z] = getTranspositionFromHomogenMatrix(M)
    % this function returns the Vector by which a homogenous
    % Transformationmatrix shifts a Point
    x = M(1,4);
    y = M(2,4);
    z = M(3,4);
end