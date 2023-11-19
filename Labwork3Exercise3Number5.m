fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

n = input('enter the value of n: ');
summ = 0;

for i = 1:10
    x = i^n;
    summ = summ + x;
end

disp("The sum is " + summ)