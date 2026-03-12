import msvcrt as m

option = ''

while option.lower() == "y" or option == '':
    text = input("Enter your text: ")

    print(text.upper())

    option = input("Another? ")