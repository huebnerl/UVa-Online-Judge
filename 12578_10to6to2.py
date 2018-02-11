import math

number = input()

for i in range(int(number)):
    length = int(input())
    red = math.acos(-1) * (length/5)**2
    green = length * (length * 0.6) - red
    print("%.2f %.2f" % (red, green))
