import tkinter as tk

def login():
    username = "admin"
    password = "password"
    if username_entry.get()==username and password_entry.get()==password:
        login_result.configure(text="Login Sucessful")
        login_result.grid(row=4, column=0, columnspan=2, pady=20)
        window.after(2500, login_result.grid_forget)
    else:
        login_result.configure(text="Login Invalid")
        login_result.grid(row=4, column=0, columnspan=2, pady=20)
        window.after(2500, login_result.grid_forget)


window = tk.Tk()
window.title("Login Form")
window.geometry("600x500")
window.configure(bg="#333333")

window.update_idletasks()
width = window.winfo_width()
height = window.winfo_height()
x = (window.winfo_screenwidth() // 2) - (width // 2)
y = (window.winfo_screenheight() // 2) - (height // 2)
window.geometry(f'{width}x{height}+{x}+{y}')

frame = tk.Frame(bg="#333333")

login_label = tk.Label(frame, text="Login", bg='#333333', fg="#ff3399", font=("Arial", 30))
username_label = tk.Label(frame, text="Username", bg='#333333', fg="#ffffff", font=("Arial", 16))
username_entry = tk.Entry(frame)
password_label = tk.Label(frame, text="Password", bg='#333333', fg="#ffffff", font=("Arial", 16))
password_entry = tk.Entry(frame, show="*")
login_button = tk.Button(frame, text="Login", bg='#ff3399', fg='#ffffff', font=("Arial", 16), command=login)

login_result = tk.Label(frame, bg='#333333', fg="#ffffff", font=("Arial", 16))

login_label.grid(row=0, column=0, columnspan=2, pady=40)
username_label.grid(row=1, column=0)
username_entry.grid(row=1, column=1, pady=20)
password_label.grid(row=2, column=0)
password_entry.grid(row=2, column=1, pady=20)
login_button.grid(row=3, column=0, columnspan=2, pady=30)

frame.pack()

window.mainloop()