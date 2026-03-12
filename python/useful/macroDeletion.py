# aim at "you sent"
import pyautogui as py
import time as t

times = 9  # divide total number of lines by two then minus it 1

t.sleep(1)

for i in range(1, times + 1):
    with py.hold("ctrl"):
        py.press("backspace")
        py.press("backspace")
        py.press("backspace")
    py.press("up")
with py.hold("ctrl"):
    py.press("left")