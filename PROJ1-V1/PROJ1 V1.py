#Daniel Ferreira Santin TIA:32037139
#Joao Paulo Bulhoes TIA:32089988

import threading
def pthreads():
    s = 0
    i = 0 
    for i in range(101):
        if i == 0:
            pass
        else:
            s += 1/i
    print(s)

threading.Thread(target = pthreads).start()