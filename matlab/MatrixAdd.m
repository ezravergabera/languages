fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

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