option = input("Enter an option [A = Circle] [B = Rectangle] [C = Square]: ")
option = option.upper()
PI = 3.14

if option == 'A':
    radius = input("Enter the radius of the circle: ")
    ans = PI * (float(radius)**2)
    print(f"The area of the circle is {ans}")
elif option == 'B':
    width, length = input("Enter the width and length of the rectangle: ").split(" ")
    ans = float(width) * float(length)
    print(f"The area of the rectangle is {ans}")
elif option == 'C':
    width = input("Enter the width of the square: ")
    ans = float(width)**2
    print(f"The area of the square is {ans}")
else:
    print("Not a valid input.")