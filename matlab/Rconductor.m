function [Rcond] = Rconductor(r, l, A)
%Rconductor Computes for the resistance of a conductor
%   Inputs are resistivity of material r, length of wire l, and 
%   cross-section area of the conductor A.
Rcond = (r*l)/A;
end