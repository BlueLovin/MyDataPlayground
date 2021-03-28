import keyboard
import time
i=0

while True:
    i+=1
    print('looping ' + str(i))
    keyboard.press_and_release('pause')
    time.sleep(110)