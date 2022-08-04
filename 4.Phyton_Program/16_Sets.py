# sets in python - these are the collection of non repetative items 
b = set() # creting the empty set VIMP
print(type(b))
b = {2,4,5,6,2,3,6,4}
print(b) # and it will print in sorted order 
b.add(9)
print(b)
# b.add([4,6,7])  => it will give the error because they are unhasable means they are mutuable 
b.add((4,6,3))
print(b,'\n')

print("Functions : ",'\n')
print("Length of the set : ",len(b))

b.remove(5)
print("After removing 5 : ",b)

b.pop()
print("After poping last element : ",b)

unio = b.union({1,9})
print("After union with 1, 9 : ",unio)

inter = b.intersection({1,5,6,9})
print("After intersection with 1,5,6,9 : ",inter)

b.clear()
print("set after clearing : ",b,'\n')