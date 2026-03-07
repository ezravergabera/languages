# Map Function - (function, iterable)
#              - Returns an iterator that applies function to every item of iterable

def make_even(num):
    if num%2 == 1:
        print(f'{num} is now {num+1}.')
        return num+1
    else:
        print(f'{num} is even. No changes made.')
        return num
    
x = [551, 641, 891, 122, 453, 223, 234, 343, 562, 115, 554, 111, 679, 516]


#* for loop method
# y = []

# for num in x:
#     y.append(make_even(num))

# print(y)


#* map method
# y = list(map(make_even, x))

# print(y)


#* list comprehension method
y = [make_even(num) for num in x]

print(y)