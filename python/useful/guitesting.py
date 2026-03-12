from tkinter import *
from PIL import ImageTk,Image
import os

fdir = os.path.dirname(os.path.abspath(__file__))

root = Tk()


# label
# myLabel1 = Label(root, text="I wabyu pi")
# myLabel2 = Label(root, text="abudo abibi")

# myLabel1.grid(row=0, column=0)
# myLabel2.grid(row=1, column=0)


# button
# def button_click():
#     myLabel = Label(root, text="I clicked a button!")
#     myLabel.pack()

# myButton = Button(root, text="Click me!", padx=50, pady=50, command=button_click)

# myButton.pack()


# entry
# e = Entry(root, width=50)
# e.pack()
# e.insert(0, "Enter your name: ")

# def button_click():
#     hello = "Hello " + e.get()
#     myLabel = Label(root, text=hello)
#     myLabel.pack()

# myButton = Button(root, text="Enter Your Name", padx=50, command=button_click)
# myButton.pack()


# Calculator
# root.title("Simple Calculator")

# e = Entry(root, width=35, borderwidth=5)
# e.grid(row=0, column=0, columnspan=3, padx=10, pady=10)

# def button_click(number):
#     # e.delete(0, END)
#     current = e.get()
#     e.delete(0, END)
#     e.insert(0, str(current) + str(number))

# def button_clear():
#     e.delete(0, END)

# def button_add():
#     first_number = e.get()
#     global f_num
#     global math
#     math = "addition"
#     f_num = int(first_number)
#     e.delete(0, END)

# def button_subtract():
#     first_number = e.get()
#     global f_num
#     global math
#     math = "subtraction"
#     f_num = int(first_number)
#     e.delete(0, END)

# def button_multiply():
#     first_number = e.get()
#     global f_num
#     global math
#     math = "multiplication"
#     f_num = int(first_number)
#     e.delete(0, END)

# def button_divide():
#     first_number = e.get()
#     global f_num
#     global math
#     math = "division"
#     f_num = int(first_number)
#     e.delete(0, END)

# def button_equal():
#     second_number = e.get()
#     e.delete(0, END)
#     if(math == "addition"):
#         e.insert(0, f_num + int(second_number))

#     if(math == "subtraction"):
#         e.insert(0, f_num - int(second_number))

#     if(math == "multiplication"):
#         e.insert(0, f_num * int(second_number))

#     if(math == "division"):
#         e.insert(0, int(f_num / int(second_number)))


# # Define Buttons

# button_1 = Button(root, text="1", padx=40, pady=20, command=lambda: button_click(1))
# button_2 = Button(root, text="2", padx=40, pady=20, command=lambda: button_click(2))
# button_3 = Button(root, text="3", padx=40, pady=20, command=lambda: button_click(3))
# button_4 = Button(root, text="4", padx=40, pady=20, command=lambda: button_click(4))
# button_5 = Button(root, text="5", padx=40, pady=20, command=lambda: button_click(5))
# button_6 = Button(root, text="6", padx=40, pady=20, command=lambda: button_click(6))
# button_7 = Button(root, text="7", padx=40, pady=20, command=lambda: button_click(7))
# button_8 = Button(root, text="8", padx=40, pady=20, command=lambda: button_click(8))
# button_9 = Button(root, text="9", padx=40, pady=20, command=lambda: button_click(9))
# button_0 = Button(root, text="0", padx=40, pady=20, command=lambda: button_click(0))
# button_add = Button(root, text="+", padx=39, pady=20, command=button_add)
# button_equal = Button(root, text="=", padx=88, pady=20, command=button_equal)
# button_clear = Button(root, text="Clear", padx=79, pady=20, command=button_clear)

# button_subtract = Button(root, text="-", padx=41, pady=20, command=button_subtract)
# button_multiply = Button(root, text="x", padx=41, pady=20, command=button_multiply)
# button_divide = Button(root, text="/", padx=41, pady=20, command=button_divide)

# # Put buttons on the screen

# button_1.grid(row=3, column=0)
# button_2.grid(row=3, column=1)
# button_3.grid(row=3, column=2)

# button_4.grid(row=2, column=0)
# button_5.grid(row=2, column=1)
# button_6.grid(row=2, column=2)

# button_7.grid(row=1, column=0)
# button_8.grid(row=1, column=1)
# button_9.grid(row=1, column=2)

# button_0.grid(row=4, column=0)
# button_clear.grid(row=4, column=1, columnspan=2)

# button_add.grid(row=6, column=0)
# button_equal.grid(row=6, column=1, columnspan=2)

# button_subtract.grid(row=5, column=0)
# button_multiply.grid(row=5, column=1)
# button_divide.grid(row=5, column=2)


# images
root.title("Images")
root.geometry("1000x1000")

img1 = ImageTk.PhotoImage(Image.open(f'{fdir}\imgs\cat.png'))
img2 = ImageTk.PhotoImage(Image.open(f'{fdir}\imgs\cat1.png'))
img3 = ImageTk.PhotoImage(Image.open(f'{fdir}\imgs\cat2.png'))

image_list = [img1, img2, img3]

if(1 > (image_list[0].width / image_list[0].height)):
    new_image_width = image_list[0].height * 500 / image_list[0].width
    new_image_height = 500
else:
    new_image_height = image_list[0].width * 500 / image_list[0].height
    new_image_width = 500


image_canvas = Canvas(root, width=500, height=500)
image_canvas.place(x=0, y=0)

image_canvas.create_image(0, 0, image=image_list[0])

root.mainloop()