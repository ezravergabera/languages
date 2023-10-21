Name = 'Arjie Rose G. Conge, BSEE-3C, TUPM-21-11142'

%% Exercise 5 Number 1

function [Rcond] = Rconductor(r, l, A)
%Rconductor Computes for the resistance of a conductor
%   Inputs are resistivity of material r, length of wire l, and 
%   cross-section area of the conductor A.
Rcond = (r*l)/A;
end

%% Exercise 5 Number 2

function [F] = TempCF(C)
%TempCF converts the value of degree Celsius to Fahrenheit
%   Input is Celsius C
F = ((9*C)/5) + 32;
end