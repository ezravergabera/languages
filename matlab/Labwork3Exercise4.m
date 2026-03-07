fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

%% Exercise 4 Number 1

addnumbers = 0;
n = 1;

while n <= 10
    addnumbers = addnumbers + n;
    n = n + 1;
end

disp("The sum is " + addnumbers);

%% Exercise 4 Number 2

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

%% Exercise 4 Number 3

i = 1;
arrayOfNums = [];
result = 0;

while i <= 10
    if i <= 5
    else
        arrayOfNums(end + 1) = i;
        result = result + i;
    end
    i = i + 1;
end

disp("Summation of numbers greater than 5 only from 1 to 10 using for loop.")
disp("The numbers are " + num2str(arrayOfNums))
disp("The sum is " + result)