summ = 0;

for i = 3:7
    x = i^3;
    summ = summ + x;
end

disp("The sum is " + summ)

%%

summ = 0;

for k = 1:3
    x = (2*(k^2)) - k;
    summ = summ + x;
end

disp("The sum is " + summ)

%%
n = input('enter the value of n: ')
summ = 0;

for i = 1:10
    x = i^n;
    summ = summ + x;
end

disp("The sum is " + summ)
