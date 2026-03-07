def add(x, y):
    return x + y

def sub(x, y):
    return x - 5

def combine_funcs(*funcs):
    def inner_funcs(*args, **kwargs):
        for f in funcs:
            f(*args, **kwargs)
    
    return inner_funcs

f = combine_funcs(lambda x: add(10, 5),lambda y: sub(10, 5))

print(f())