# Average of n numbers given by the user in python 
n = int(input('Enter the value of n : '))
sum = 0 
for i in range (0 , n):
    num = int(input("Enter the number: "))
    sum+=num
avg = sum/n
print("The average of the input ",avg)