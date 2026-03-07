Name = 'Arjie Rose G. Conge, BSEE-3C, TUPM-21-11142'

%% Exercise 3 Number 1

clear
clc
syms x y z w
eqns = [x + 2*y - 3*z + 4*w == 12, 2*x + 2*y - 2*z + 3*w == 10, 0 + y + z + 0 == -1, x - y + z - 2*w == -4];
sol = solve(eqns, [x y z w]);
disp(sol.x)
disp(sol.y)
disp(sol.z)
disp(sol.w)

%% Exercise 3 Number 2

clear
clc
realNum = input ("Enter a Real Number: ");
fprintf("Your number is %.2f", realNum);

%% Exercise 3 Number 3

clear
clc
realNumber = 12345.6789;

% without specifying any field width and precision
fprintf("The real number is %f\n", realNumber);

% in a field width of 10 with 4 decimal places
fprintf("The real number is %10.4f\n", realNumber);

% in a field width of 10 with 2 decimal places
fprintf("The real number is %10.2f\n", realNumber);

% in a field width of 6 with 4 decimal places
fprintf("The real number is %6.4f\n", realNumber);

% in a field width of 2 with 4 decimal places
fprintf("The real number is %2.4f\n", realNumber);

%% Exercise 3 Number 4

% the script would print 6 lines
num = 12.3;
disp('Hello!')
fprintf('Hmm how many ')
fprintf('lines\n\nwill print?\n')
fprintf('%6.2f\n', num)