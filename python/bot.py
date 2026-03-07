from pyautogui import *
import pyautogui
import time
import keyboard
import random
import win32api, win32con

# Tile 1 Position: X:623 Y:600
# Tile 2 Position: X:680 Y:600
# Tile 3 Position: X:780 Y:600
# Tile 4 Position: X:850 Y:600

def click(x, y):
    win32api.SetCursorPos((x,y))
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN, 0, 0)
    time.sleep(0.01)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP, 0, 0)

while keyboard.is_pressed('q') == False:
    if pyautogui.pixel(623, 600)[0] == 0:
        click(623, 600)
    if pyautogui.pixel(680, 600)[0] == 0:
        click(680, 600)
    if pyautogui.pixel(780, 600)[0] == 0:
        click(780, 600)
    if pyautogui.pixel(850, 600)[0] == 0:
        click(850, 600)