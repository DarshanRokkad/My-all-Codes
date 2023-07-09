# Write a python program to remove the characters which have odd index values of a given string . 
string = input("Enter the string : ")
s = ''
for i in range(len(string)):
    if i%2==0:
        s+=string[i]
print("String :",string)
print("String :",s)