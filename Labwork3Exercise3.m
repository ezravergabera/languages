fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

%% Exercise 3 Number 1

number = input('Enter your number: ');
result = 1;

for i = 1:number
    result = result * i;
end

disp("The factorial of " + number + " is " + result)

%% Exercise 3 Number 2 a

summ = 0;

for i = 3:7
    x = i^3;
    summ = summ + x;
end

disp("The sum is " + summ)

%% Exercise 3 Number 2 b

i = 3:7;
a = i.^3;
result = sum(a);

disp("The sum is " + result)

%% Exercise 3 Number 3 a

summ = 0;

for k = 1:3
    x = (2*(k^2)) - k;
    summ = summ + x;
end

disp("The sum is " + summ)

%% Exercise 3 Number 3 b

k = 1:3;
a = (2.*(k.^2)) - k;
result = sum(a);

disp("The sum is " + result)

%% Exercise 3 Number 4

summation = 0;
for i = 2:2:10
    summation = summation + i;
end

disp("The sum is " + summation);

%% Exercise 3 Number 5

n = input('enter the value of n: ')
summ = 0;

for i = 1:10
    x = i^n;
    summ = summ + x;
end

disp("The sum is " + summ)