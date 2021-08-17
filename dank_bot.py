import pyautogui as gui
import time
t=int(gui.prompt("enter time "))

for i in range (t):
    time.sleep(42)
    gui.write("pls dig")
    gui.press('enter')
    time.sleep(1)
    gui.write("pls hunt")
    gui.press('enter')
    time.sleep(1)
    gui.write("pls fish")
    gui.press('enter')
    
    