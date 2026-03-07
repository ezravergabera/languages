import pyautogui as py
import time as t
import math
import msvcrt as m

def pin(times):
    for i in range(1, times + 1):
        message = "PIN "
        py.typewrite(message)
        with py.hold("ctrl"):
            py.press("down")
    for i in range(1, times + 2):
        with py.hold("ctrl"):
            py.press("up")
    with py.hold("ctrl"):
        py.press("right")
        py.press("right")

def spacing(times):
    for i in range(1, math.ceil(times/5)):
        py.press("down")
        py.press("down")
        py.press("down")
        py.press("down")
        py.press("enter")
        py.press("down")
        with py.hold("ctrl"):
            py.press("right")
            py.press("right")

print("aim at the leftmost side of first line")
times = int(input("Enter the number of pins: "))
t.sleep(1)

pin(times)
spacing(times)

print("Press any key to exit...")
m.getch()