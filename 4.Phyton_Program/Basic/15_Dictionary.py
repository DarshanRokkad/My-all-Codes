# Dictionaary in python
# syntax => dict = {key:value,....}
dict = {}
print(type(dict))

mydict ={"Fast":"In a quick manner","Harry":"A coder","list":[9,6,7,3]}
print(mydict,"\n")

print("Fast meaning",mydict["Fast"])
print("Fast meaning",mydict.get("Fast"))

print("Accessing the first elements of the list present in the dictionary ",mydict["list"][0])

mydict["Harry"]="He is youtuber who teaches student for free"
print('\n',mydict,'\n') 

print(mydict.keys())
print(mydict.values(),'\n')

for keys , values in mydict.items():
    print(keys,"=",values)

new = {"darshan":"Coding","light":"cosmic","Harry":"Donator"} # elements will be add and if any key is same then the value is updated
mydict.update(new)
print('\n',mydict)