# Find the whether the input number is prime or not
n = int(input("Enter the number : "))
if n%4==0 and n%100!=0 or n%400==0:
    print(f"{n} is the prime numbers")
else: 
    print(f"{n} is not prime numbers")