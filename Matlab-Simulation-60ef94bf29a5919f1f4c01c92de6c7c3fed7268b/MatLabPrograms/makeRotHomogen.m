function [res] = makeRotHomogen(R)
% this function fills a Rotationmatrix to make it a homogen transformation
% matrix
res = [R(1,1) R(1,2) R(1,3) 0; R(2,1) R(2,2) R(2,3) 0; R(3,1) R(3,2) R(3,3) 0; 0 0 0 1];
end