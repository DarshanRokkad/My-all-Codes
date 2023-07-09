# Write a python program to add 'ing' at the end of a given string(length should be atleast 3).
# if the given string already ends with 'ing' then add 'ly' instead . 
# if the string length of the string is less than 3 , leave it unchanged  
# sample string : 'abc' excepted result 'abcing'
# sample string : 'string' excepted result 'stringly'
string = input("Enter the string : ")
if len(string)<3 :
    print(f"String : {string}")
else :
    if string[-3:] == 'ing':
        string+='ly'
    else :
        string+='ing'
    print(f"String : {string}")