# Calculating the sum of n natural number using resursion
def su(n):
    if n==1:
        return 1 
    else :
        return n + su(n-1)

n = int(input("Enter the value of n : "))
print(su(n))