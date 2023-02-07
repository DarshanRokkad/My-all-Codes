# some of the main string function in python
name = "code\twith Harry \\ harry"
#index                    18 

# gives the length of the string 
print(len(name))

# gives true or false 
print("")
print(name.endswith("arry"))
print(name.startswith("Harry"))

# gives number of occurance of a character or a string
print("")
print(name.count("r"))
print(name.count("ri"))

# gives the string with the first letter capitalized
print("")
print(name.capitalize())

# gives the index of the string where it is present
print("")
print(name.find("har")) # gives the first occurance of a letter
print(name.find("ri")) 

# replaces the word 
print("")
print(name.replace("harry","darshan"))
name = name.replace("harry","Darshan")
print(name) # also changed in the name you have to save it 