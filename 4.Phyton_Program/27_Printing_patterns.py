# printing the square pattern in python 
for i in range (1,4):
    for j in range (1,4):
        print("*",end=" ")
    print("")

print("")
i = 1 
while i<4:
    j=1 
    while j<4:
        print("*",end=" ")
        j+=1
    print("")
    i+=1