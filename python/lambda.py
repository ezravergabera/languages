# functions
# def add(x,y):
#     return x+y
# print(add(4,5))


# lambda method or also called as anonymous functions.
# BNF: print((lambda <input>: <operation>)(<args>))
print((lambda x,y: x+y)(4,5))

# intended use of lambda functions
def my_map(my_func, my_iter):
    result = []
    for item in my_iter:
        new_item = my_func(item)
        result.append(new_item)
    return result

nums = [3, 4, 5, 6, 7]

cubed = my_map(lambda x: x**3, nums)

squared = my_map(lambda x: x**2, nums)

print(cubed, squared)