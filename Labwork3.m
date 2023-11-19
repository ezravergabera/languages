fprintf("Name: Arjie Rose G. Conge\nCourse, Year and Section: BSEE-3C\nCourse title: Numerical Methods PEE4L-M\nInstructor: Engr. Melanie T. Iradiel\n")

%% Exercise 2 Number 1 a.

a = input('Enter the value of a: ')
b = input('Enter the value of b: ')
c = input('Enter the value of c: ')

discr = (b*b) - (4*a*c);
if discr < 0
    disp('Warning: discriminant is negative, root are imaginary');
end

%% Exercise 2 Number 1 b.

a = input('Enter the value of a: ')
b = input('Enter the value of b: ')
c = input('Enter the value of c: ')

discr = (b*b) - (4*a*c);
if discr < 0
    disp('Warning: discriminant is negative, root are imaginary');
else
    disp('Roots are real, but may be repeated')
end

%% Exercise 2 Number 1 c.

% filename daw Labwork3.m

a = input('Enter the value of a: ')
b = input('Enter the value of b: ')
c = input('Enter the value of c: ')

discr = (b*b) - (4*a*c);
if discr < 0
    disp('Warning: discriminant is negative, root are imaginary');
elseif discr == 0
    disp('Discriminant is zero, roots are repeated')
else
    disp('Roots are real')
end