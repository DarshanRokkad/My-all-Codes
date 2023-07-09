# file handling 

# with automatically close the file
with open("E:\\My Codes\\4.Phyton_Program\\Full_Python\\014_file1.txt",'w') as f1 :
    f1.write("Hey this is file 1 content.")
print("f1 is closed",f1.closed)


# reading the file 1 and copying data to variable 
f1 = open("E:\\My Codes\\4.Phyton_Program\\Full_Python\\014_file1.txt",'r')
da = f1.read()
f1.close()


# writing to file 2 by variable contains data of file 2
f2 = open("E:\\My Codes\\4.Phyton_Program\\Full_Python\\014_file2.txt",'w')
for data in da :
    f2.write(data)
print("----file 1 is copied to file 2----")

# checking wheather the file is copied or not 
f2 = open("E:\\My Codes\\4.Phyton_Program\\Full_Python\\014_file2.txt",'r')
print("File 2 has =>",f2.read())
f2.close()

print()
print("file 1 is closed ->",f1.closed)
print("file 2 is closed ->",f2.closed)
print()  