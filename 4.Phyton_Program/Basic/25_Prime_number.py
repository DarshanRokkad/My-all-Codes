# Finding whether the number entered by user is prime number or not 
num = int(input("Enter the number: "))
result = True
for i in range (2,num):
    if num%i==0 :
        result = False
        break
if result:
    print(f"{num} is a prime number")
else: 
    print(f"{num} is not a prime number")