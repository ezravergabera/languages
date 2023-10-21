%% Lab 3 Exercise 1

x = 1:6;
y = 6:-1:1;

i = x+y

ii = x-y

iii = x.*y

iv = x./y

v = x.^2

vi = 1./x

vii = x/2

viii = y+1

%% Exercise 1 Number 2
x = 1:0.5:3;
f = x.^2;
g = x.^3+1;

format

y = f./g

%% Exercise 2 Number 1 a.

a = input('Enter the value of a: ')
b = input('Enter the value of b: ')
c = input('Enter the value of c: ')

discr = (b*b) - (4*a*c);
if discr < 0
    disp('Warning: discriminant is negative, root are imaginary');
end

%% Exercise 2 Number 1 b.

a = input('Enter the value of a: ')
b = input('Enter the value of b: ')
c = input('Enter the value of c: ')

discr = (b*b) - (4*a*c);
if discr < 0
    disp('Warning: discriminant is negative, root are imaginary');
else
    disp('Roots are real, but may be repeated')
end

%% Exercise 2 Number 1 c.

% filename daw Labwork3.m

a = input('Enter the value of a: ')
b = input('Enter the value of b: ')
c = input('Enter the value of c: ')

discr = (b*b) - (4*a*c);
if discr < 0
    disp('Warning: discriminant is negative, root are imaginary');
elseif discr == 0
    disp('Discriminant is zero, roots are repeated')
else
    disp('Roots are real')
end

%% Exercise 2 Number 2

% filename daw myY.m

i = input("Enter the value of i: ");

if i < 0
    y = 0;
    disp("The value of Y is " + y);
elseif i == 0
    y = 2;
    disp("The value of Y is " + y);
elseif i > 0
    y = -3;
    disp("The value of Y is " + y);
else
    disp("Invalid input.");
end

%% Exercise 2 Number 3

% filename daw MatrixAdd.m

A = input('Enter a Matrix for Matrix A: ');
B = input('Enter a Matrix for Matrix B: ');

if size(A) == size(B)
    disp(newline + "A+B");
    A+B
    disp(newline + "A-B");
    A-B
    disp(newline + "B-A");
    B-A
else
    disp("Error: The sizes of the Matrices are not the same.")
end

%% Exercise 2 Number 4

% filename daw MatrixMultiply.m

A = input('Enter a Matrix for Matrix A: ');
B = input('Enter a Matrix for Matrix B: ');

[numRowsA, numColsA] = size(A);
[numRowsB, numColsB] = size(B);

if numColsA == numRowsB
    disp(newline + "Matrices A x B are conformable.")
    A*B
else
    disp(newline + "Error: The sizes of the Matrices A x B are not conformable.")
end

if numColsB == numRowsA
    disp(newline + "Matrices B x A are conformable.")
    B*A
else
    disp(newline + "Error: The sizes of the Matrices B x A are not conformable.")
end