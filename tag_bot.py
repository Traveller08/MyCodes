from os import truncate
import pyautogui as gui
import time
t=int(gui.prompt("Enter the number of stickers u want to send"))
time.sleep(5)
x,y=gui.position()
for i in range (t):
    gui.moveTo(x,y,logScreenshot=False,_pause=False)
    gui.leftClick(logScreenshot=False,_pause=False)
