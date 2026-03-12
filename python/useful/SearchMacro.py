import pyautogui as py
import keyboard as key
import random
import time as t
import msvcrt as m
import json

def generate_random(num):
    word = ""
    for j in range(1, num + 1):
        word = word + chr(random.randint(65, 122))
        if random.randint(1, 2) == 1:
            word = word + " "
    return word

def in_db(word):
    with open("db.txt", "r") as f:
        try:
            db_set = json.loads(f.read())
        except json.decoder.JSONDecodeError as e:
            print(f"Error decoding JSON: {e}")
            db_set = None

    with open("db.txt", "w") as f:
        if db_set == None:
            db_set = [word]
            f.write(json.dumps(list(db_set)))
            return False
        elif word not in db_set:
            db_set.append(word)
            f.write(json.dumps(list(db_set)))
            return False
        else:
            return True

times = 28

print("Press any key to continue...")
m.getch()
t.sleep(1)

print("Press q to stop.")
for i in range(1, times + 1):
    t.sleep(7)
    if(key.is_pressed("q")):
        break
    search = ""
    number_of_letter = random.randint(6, 15)
    search = generate_random(number_of_letter)
    while in_db(search) == True:
        search = generate_random(number_of_letter)
    py.typewrite(search)
    py.press("enter")
    with py.hold("ctrl"):
        py.press("e")
    py.press("backspace")

with py.hold("alt"):
    py.press("tab")

print("Press any key to exit...")
m.getch()