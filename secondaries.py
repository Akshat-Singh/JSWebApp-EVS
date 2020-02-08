import time


def calculations():
    startTime = time.time()
    number = 0
    while time.time() - startTime <= 1.0:
        number = number + 1
    return number
