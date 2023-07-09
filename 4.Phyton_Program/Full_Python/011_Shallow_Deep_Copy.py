#shallow copy 
print("------Shallow Copy------")
lst1 = [[2,3],[5,6]]

lst2 = lst1
print("Intially list.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()

# here if the element is changed the list are pointing to a single list
lst1[0][1] = 10
print("After change in element.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()

# here if the list is changed then as they are refering to same list so changes in both 
lst1[0] = [7,8]
print("After change in the list in nested list.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)

print("----------------------------------------------")

lst2 = lst1.copy()
print("Intially list.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()

# here if the element is changed the list are pointing to a single list
lst1[0][1] = 340
print("After change in element.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()

# here if the list is changed the new list will be created before this they will point to the same 2d list 
lst1[0] = [45,25]
print("After change in the list in nested list.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()
print()

print("----------------------------------------------")

import copy
#deep copy 
print("------Deep Copy------")
lst1 = [[2,3],[5,6]]
lst2 = copy.deepcopy(lst1)
print("Intially list.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()

# here even if the element is changed before intitally separate list will be created for both the list 
lst1[0][1] = 10
print("After change in element.")
print("List 1 : ",lst1)
print("List 2 : ",lst2)
print()
