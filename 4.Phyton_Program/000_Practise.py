import math
import os
import random
import re
import sys


class Car:
    max_speed = 0 
    speed_unit = ""
    def Car (max_speed,speed_unit):
        if speed_unit == "km/h":
            print(f"Car with the maximum speed of {max_speed} km/h") 
        else :
            print(f"Car with the maximum speed of {max_speed} mph")

class Boat:
    max_speed = 0 
    def Boat(max_speed):
        print(f"Boat with the maximum speed of {max_speed} knots")

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')
    q = int(input())
    queries = []
    for _ in range(q):
        args = input().split()
        vehicle_type, params = args[0], args[1:]
        if vehicle_type == "car":
            max_speed, speed_unit = int(params[0]), params[1]
            vehicle = Car(max_speed, speed_unit)
        elif vehicle_type == "boat":
            max_speed = int(params[0])
            vehicle = Boat(max_speed)
        else:
            raise ValueError("invalid vehicle type")
        fptr.write("%s\n" % vehicle)
    fptr.close()
