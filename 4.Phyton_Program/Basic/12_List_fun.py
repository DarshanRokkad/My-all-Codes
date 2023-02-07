# Some of the list function in python
l = [1,8,7,2,21,15]

print("original : " ,l,"\n")

l.sort()
print("After sorting : ",l,"\n")

l.reverse()
print("After reversing : ",l,"\n")

l.append(100) # give number
print("After appending  100 : ",l,"\n")

l.pop(3)  # give index 
print("After poping from index 3 : ",l,"\n")

l.remove(100)
print("After removing 100: ", l,"\n")

# returns the index of the number if present if not present then returns error
print("Finding the index at which 15 is present : ", l.index(15),"\n")