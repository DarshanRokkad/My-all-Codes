# Finding factors of the number 
n = int(input("Enter the nnubers you need to find the factorial : "))
print("The factors of the number: ")
for i in range (1,n+1):
    if n%i == 0 :
        print(i,end=" ")