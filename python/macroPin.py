import pyautogui as py
import time as t
import msvcrt as m

times = int(input("Enter the number of pins: ")) # number of pins

t.sleep(3)

for i in range(1, times + 1):
    message = "PIN "
    py.typewrite(message)
    py.press("down")
    with py.hold("ctrl"):
        py.press("left")

print("Press any key to exit...")
m.getch()