# aim at "you sent"
import pyautogui as py
import time as t
import math

def delete(times):
    for i in range(1, times + 1):
        with py.hold("ctrl"):
            py.press("backspace")
            py.press("backspace")
            py.press("backspace")
        py.press("up")
    with py.hold("ctrl"):
        py.press("left")

def pin(times):
    for i in range(1, times + 2):
        message = "PIN "
        py.typewrite(message)
        py.press("down")
        with py.hold("ctrl"):
            py.press("left")
    for i in range(1, times + 1):
        py.press("up")
    with py.hold("ctrl"):
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

t.sleep(1)

user_input = 17 # change this according to the total number of lines in notepad

number_of_lines = int((user_input + 1) / 2)
times = number_of_lines - 1

delete(times)
pin(times)
spacing(times)