import time as t

def my_decorator(func):
    def wrapper():
        print(f'Running {func.__name__}')
        start = t.perf_counter()
        func()
        elapsed_time = t.perf_counter() - start
        print(f'Function Completed in {elapsed_time: .4f} seconds')
    return wrapper

@my_decorator
def do_that():
    print('Doing that')

@my_decorator
def do_this():
    print('Doing this')

do_this()
do_that()