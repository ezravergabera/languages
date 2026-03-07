%% Exercise 4 Number 3
Name = 'Arjie Rose G. Conge, BSEE-3C, TUPM-21-11142';

x = input ("Your Name: ", 's');
y = input ("Your Year and Section: ", 's');
z = input ("Course Title: ", 's');
w = input ("Name of your Instructor: ", 's');
TE = input ("Enter the True Error value: ");
AE = input ("Enter the Absolute Error value: ");
RTE = input ("Enter the Relative True Error value: ");
ARTE = input ("Enter the Absolute % Relative True Error value: ");
ApE = input ("Enter the Approximate Error value: ");
RAE = input ("Enter the % Relative Approximate Error value: ");

fprintf('\nHello %s,\n', x);
fprintf('You are enrolled in the course %s,\n', z);
fprintf('Your year and section is %s,\n', y);
fprintf('Your instructor for this course is %s.\n\n', w);

disp('-------Results-------')
fprintf('True Error: %.2f\n', TE);
fprintf('Absolute True Error: %.2f\n', AE);
fprintf('Relative True Error: %.2f\n', RTE);
fprintf('Absolute %% Relative True Error: %.2f%%\n', ARTE);
fprintf('Approximate Error: %.2f\n', ApE);
fprintf('%% Relative Approximate Error: %.2f%%\n', RAE);