import math

a = int(input("Enter the value of a : "))
b = int(input("Enter the value of b : "))
c = int(input("Enter the value of c : "))
print(f"{a}X2 + {b}X + {c}")
d = b*b - 4*a*c
if d<0:
    print("Roots are imaginary and unequal.")
elif d==0:
    print("Roots are real and equal.")
else :
    print("Roots are real and unequal")