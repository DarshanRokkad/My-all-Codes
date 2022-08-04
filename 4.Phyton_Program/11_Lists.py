# Lists in python
lis = []

print(type(lis))
name = input("Enter your name : ")
number = int(input("Enter your phone number: "))
fruit = input("Enter your favourite fruit : ")
cgpa = float(input("Enter your Cgpa : "))
gender = bool(int(input("Enter 1 if you are a boy : ")))

lis = [name,number,fruit,cgpa,gender]
print(lis,'\n')

print("The first element of the list is ",lis[0])
print("The first element th first charcter is ",lis[0][0],"\n")

print(lis[0:],"\n")
print(lis[:-1])
print(lis[3:5]) # prints 3rd and 4th element from the list