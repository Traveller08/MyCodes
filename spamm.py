import pyautogui
import time

a=int(pyautogui.prompt("How many times you want to send a message","Spam Bot"))
mess=pyautogui.prompt("Enter the message you want to send","Spam Bot")
pyautogui.confirm("Are you sure?","Spam Bot")
pyautogui.alert("The Bot is going to start, please move the cursor to the target area in 5 sec","Spam Bot")
time.sleep(5)
x,y=pyautogui.position()
pyautogui.moveTo(x,y)
pyautogui.click()
while(a>0):
    pyautogui.write(mess,interval=0.000001,logScreenshot=None,_pause=False)
    pyautogui.press('enter',interval=0.000001,logScreenshot=None,_pause=False)
    a-=1