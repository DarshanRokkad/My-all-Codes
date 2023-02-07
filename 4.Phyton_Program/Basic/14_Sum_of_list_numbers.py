# The sum of elements in the list
n = int(input("Enter the number elements in the list : "))
l=[]
print("Enter the elements of the list : ")
for i in range (0,n):
    a=int(input())
    l.append(a)
print(l)
sum = 0 
for j in l:
    sum+=j
print("The sum of elements of the list is ",sum)