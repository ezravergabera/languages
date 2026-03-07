import pyautogui as py
import keyboard as key
import time as t


def Spam(message, times):
    for i in range(1, times + 1):
        if(key.is_pressed("q")):
            break
        t.sleep(0.05)
        py.typewrite(message)
        py.press("enter")
        

# times = 30
# for i in range(1, times + 1):
#     search = ""
#     number_of_letter = random.randint(5, 10)
#     for j in range(1, number_of_letter + 1):
#         search = search + chr(random.randint(65, 122))
#         if random.randint(1, 2) == 1:
#             search = search + " "
#     py.typewrite(search)


words = input("Your message: \n")
count = int(input("How many times: \n"))
t.sleep(2)
Spam(words, count)