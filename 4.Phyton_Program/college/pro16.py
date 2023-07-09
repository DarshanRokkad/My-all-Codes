# Write a python program to reverse a string .
def ReverseString(s):
    result = ''
    for i in range(len(s)):
        result+=s[(len(s)-i-1)]
    return result

string = input("Enter the string : ")
reversedstring = string[::-1]
print(f"String : {string}")
print(f"Reversed String using inbuilt : {reversedstring}")
print(f"Reversed String using user defined : {ReverseString(string)}")