# Write a python program to change a given string to a new string where the first and last chars have been exchanged .
string = input("Enter the string : ")
s = string[-1]+ string[1:-1] + string[0] 
print("String :",string)
print("String :",s)