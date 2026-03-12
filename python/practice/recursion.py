def evenNums(num):
    print(num)
    if num % 2 != 0:
        print("Please enter an even number.")
    elif num == 2:
        return num
    else:
        return evenNums(num - 2)

def fibonacci(idx):
    if idx <= 1:
        return idx
    else:
        return fibonacci(idx-1)+fibonacci(idx-2)


print(fibonacci(8))
