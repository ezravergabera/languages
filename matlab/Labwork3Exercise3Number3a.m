fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

summ = 0;

for k = 1:3
    x = (2*(k^2)) - k;
    summ = summ + x;
end

disp("The sum is " + summ)