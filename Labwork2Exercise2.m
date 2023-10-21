%% Exercise 2
disp("Arjie Rose G. Conge, BSEE-3C, TUPM-21-11142, Engr. Melanie T. Iradiel")

prod(1:5)

%% Number 2

B = [2:2:20]
B = B(:)
reshape(B,2,[])

%% Number 3

x = [-1,3,5,7,11,13,2,4,6]
x(1,1:5) = min(x)

%% Number 4

x = [1 4; 8 3]
diag(x)
sum(x)
sum(sum(x))
transpose(x)

%% Number 5

x = [2 8 5; 9 7 1]
b = [2 4 5]
max(max(x))
min(min(x))
mean(x, 2)
x = [x(1,:); x(2,:); b]

%% Number 6

x = [2 6 12; 15 6 3; 10 11 1]
x(1,:) = mean(x(1,:))
x1 = x(1,:)
x2 = x(2,:)
x3 = x(3,:)
reshape(x,1,[])

%% Number 7

eye(5)

%% Number 8

b = [5:5:100]
numel(b)