import math as m

user_input = input()
x = user_input.split(" ")

a = int(x[0])
b = int(x[1])
c = int(x[2])

ansRow = (a / c)
ansCol = (b / c)

ans = m.ceil(ansRow) * m.ceil(ansCol)

print(ans)