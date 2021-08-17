from os import truncate
import pyautogui as gui
import time
t=int(gui.prompt("enter the no of person you want to tag"))
time.sleep(5)
cnt=int(0)
for i in range (t):
    gui.write("@")
    gui.press('down',presses=cnt,interval=0,logScreenshot=None,_pause=True)
    gui.press('enter',presses=1,interval=0,logScreenshot=None,_pause=True)
    cnt+=1
gui.write("Marks batao apne apne DD ke saare")
gui.press('enter')