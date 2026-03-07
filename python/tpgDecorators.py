def func_decorator(func):
    def wrapper(arg1, arg2):
        print(f'Function used: {func.__name__}')
        return func(arg1, arg2)
    return wrapper

@func_decorator
def add(x, y):
    print(f'The sum is {x + y}')

@func_decorator
def sub(x, y):
    print(f'The difference is {x - y}')

add(6, 4)
sub(15, 7)