# Conditional statements in python
age = int(input("Enter your age : "))
if age>18 and age<20:
    print("You can go for dating")
elif age>50 or age<10: 
    print("You can have a cup of tea")
elif not age>0:
    print("You are not born or you are died!")
else : 
    print("You have to concentrate on your future")