def write(fn):
    with open(fn, 'w') as f:
        f.write("Hello World!")

def read(fn):
    with open(fn, 'r') as f:
        content = f.read()
        print(content)

file = input("enter your filename: ")

write(file)
read(file)