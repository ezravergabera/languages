fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

disp("This will calculate the factorial of any number")
number = input('Enter your number: ');
result = 1;

for i = 1:number
    result = result * i;
end

disp("The factorial of " + number + " is " + result)