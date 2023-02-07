# * * *
# * *
# *
n = int(input("n = "))
i = 1 
print("")
while i<=n:
    j = 1 
    while j<=n-i+1:
        print("* ",end="")
        j+=1
    print("")
    i+=1