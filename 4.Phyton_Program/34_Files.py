# writing to the file in python 

print("***************************************************")
print("Writing content to the file\n")
# opening the file
f = open("34_About_me.txt","w")
data = '''Name : Darshan rokkad 
Branch : Computer science and engineering
Domain : Software engineering 
language : C , C++ and python'''
# Writing content to the file
f.write(data)
print("Written to file successfully!")
# closing file
f.close()
print("***************************************************")

print("Reading content from the file\n")
with open("34_About_me.txt","r") as f :
    # reading content from the file
    content = f.read()
    print(content)
print("\nReaded from file successfully!")
f.close()
print("***************************************************")

print("Appending data to the file\n")
with open("34_About_me.txt","a") as f : 
    new = "\nInterest : Web development"
    f.write(new)
print("Appended to file successfully!")
print("***************************************************")

print("Reading content from the file\n")
with open("34_About_me.txt","r") as fi :
    # reading content from the file
    content = fi.read()
    print(content)
print("\nReaded from file successfully!")
f.close()
print("***************************************************")