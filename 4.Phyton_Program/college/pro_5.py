# program to read a string of 4 string and convert it to the next character 

small = [ chr(i) for i in range(97,97+25+1)]
large = [ chr(i) for i in range(65,65+25+1)]

name = input("Enter 4 character : ")[:4]
print("Name :", name)
n=''
for i in name:
    if i.isupper():
        n+=large[(large.index(i)+1)%len(small)]
    elif i.islower():
        n+=small[(small.index(i)+1)%len(small)]
print("Name :", n)