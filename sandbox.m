% mas madaling way
clc
clear
f=[3 -13 4];
roots(f)

%% Exercise 2 Number 2

clc
clear
a = 3, b = -13, c = 4
xp = (-b + sqrt((b^2)-(4*a*c)))/(2*a)
xm = (-b - sqrt((b^2)-(4*a*c)))/(2*a)

%% solving a quadratic equation using solve but without specifying the 'a' variable

clc
clear
syms a b c x
eqn = a*x^2 + b*x + c == 0;
sol = solve(eqn)

%% solving a quadratic equation using solve but with specifying the 'a' variable

clc
clear
syms a b c x
eqn = a*x^2 + b*x + c == 0;
sol = solve(eqn, a)

%% Exercise 3 Number 1

clc
clear
syms x y z w

% isa lang ginamit na variable
eqns = [x + 2*y - 3*z + 4*w == 12, 2*x + 2*y - 2*z + 3*w == 10, 0 + y + z + 0 == -1, x - y + z - 2*w == -4];
sol = solve(eqns, [x, y, z, w]);

% apat na variable ginamit
eq1 = x + 2*y - 3*z + 4*w == 12;
eq2 = 2*x + 2*y - 2*z + 3*w == 10;
eq3 = 0 + y + z + 0 == -1;
eq4 = x - y + z - 2*w == -4;
sol = solve([eq1,eq2,eq3,eq4], [x,y,z,w]);

disp(sol.x)
disp(sol.y)
disp(sol.z)
disp(sol.w)

%% recall

clc
clear
syms a
equation = a + 5 == 6;
sol = solve(equation, a);
disp(sol)

%% input of variable

clear
clc
x=input("Your name: ", "s"); disp(['Thank you ' x])

%%

A = [1 2 3; 4 5 6; 7 8 9]