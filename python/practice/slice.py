numbers: list[int] = list(range(1, 11))
text: str = 'Hello, world!'

rev: slice = slice(None, None, -1)
f_five: slice = slice(0, 5)

print(numbers[rev])
print(text[f_five])