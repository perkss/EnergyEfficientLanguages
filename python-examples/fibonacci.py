import sys
import time

def fibonacci(n):
    if n < 2:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)
import datetime


if __name__ == '__main__':
       args = sys.argv[1:]

       if len(args) == 2 and args[0] == '-n':
           st = datetime.datetime.now()
           result = fibonacci(int(args[1]))
           et = datetime.datetime.now() - st
           print("Fibonacci of ", args[1], " = ", result, " in ", et.total_seconds() * 1000, " milliseconds")
