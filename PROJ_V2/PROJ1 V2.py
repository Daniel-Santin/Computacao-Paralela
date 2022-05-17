#Daniel Ferreira Santin TIA:32037139
#Joao Paulo Bulhoes TIA:32089988

from time import sleep
from concurrent.futures import ThreadPoolExecutor, as_completed

THEADS = 100
def pthreads():
    n = THEADS / 2
    S = 0
    J = 0 
    for i in range(int(n)):
        if i == 0:
            pass
        else:
            S += 1/i

    for i in range(int(n)):
        J += 1/n
        n +=1
    
    print(S + J)
pthreads()


