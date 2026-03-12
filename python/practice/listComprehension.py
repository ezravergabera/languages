# names = [
#     'Bobby C. Brown',
#     'Chris Stevens',
#     'Jacob G. Smith',
#     'John Paul Davis'
# ]

# last = [n.split(' ')[-1] for n in names]
# print(last)

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    print([each for each in [[i, j, k] for i in range(x + 1) for j in range(y + 1) for k in range(z + 1)] if sum(each) != n])