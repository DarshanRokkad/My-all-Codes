# In python we are having for loop and while loop
# we hve break and continue

print("printing in while loop")
i = 0 
while i<80:
    print(i)
    if i is 3 :
        break
    i+=1

print("\nprinting in for loop")
#for i in range (start,end,step)
li =[4,"darshan",9,"you"]
for i in range (len(li)):
    if i == 1 :
        continue
    print(li[i])

print("Printing the odd number present in between 1 to 100 : \n")
for i in range (1,100,2):
    print(i)