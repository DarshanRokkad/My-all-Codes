# Printing the table in python using loops
num = int(input("Enter the number you need tables : "))
for i in range (1,11):
    print(f"{str(num)} X {str(i)} = {str(num*i)}")