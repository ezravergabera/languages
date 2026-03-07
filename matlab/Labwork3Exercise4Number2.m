fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

arrayOfNums = [];
result = 0;

for i = 1:10
    if i <= 5
        continue
    end
    arrayOfNums(end + 1) = i;
    result = result + i;
end

disp("Summation of numbers greater than 5 only from 1 to 10 using for loop.")
disp("The numbers are " + num2str(arrayOfNums))
disp("The sum is " + result)