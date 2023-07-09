# write a program to show a simple calculator 
a = int(input("Enter the number 1 : "))
b = int(input("Enter the number 2 : "))
op = input("Enter the operator : ")[0]
if op == '+':
    print(f"{a} + {b} = {a+b}")
elif op == '-':
    print(f"{a} - {b} = {a-b}")
elif op == '*':
    print(f"{a} * {b} = {a*b}")
elif op == '/':
    print(f"{a} / {b} = {a/b}")
elif op == '%':
    print(f"{a} % {b} = {a%b}")
else:
    print("Invalid operator.")