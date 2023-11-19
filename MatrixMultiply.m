fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

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