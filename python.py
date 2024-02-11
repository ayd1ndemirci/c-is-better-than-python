import time
from math import isqrt

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, isqrt(num) + 1):
        if num % i == 0:
            return False
    return True

onset_time = time.time()

count = 0
num = 2
while True:
    if is_prime(num):
        count += 1
    num += 1
    if count == 100000:
        print(time.time() - onset_time)
        exit()
