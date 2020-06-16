function [res] = homogenTranslationMat(x,y,z)
    %this function forms a Translation about a vector x,y,z in a homogenous
    %transformation matrix res. 
    %For a Vector V: V*(x,y,z) <--> (V,1) * res
    res = [1 0 0 x; 0 1 0 y; 0 0 1 z; 0 0 0 1];
end