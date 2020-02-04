import time

def only():
    startTime = time.time()
    number = 0
    while time.time() - startTime <= 45.6:
        number = number + 1
    print(f"{number}\n{time.time() - startTime}")


only()  
