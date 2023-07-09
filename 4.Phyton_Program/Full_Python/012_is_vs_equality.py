# difference between is and ==
# == -> Compare the elements inside the list
# is -> Compare the reference of the list
lst1 = [1, 2, 3]

lst2 = lst1
print("**** list2 = list1 ****")
print("List 1 address :", id(lst1))
print("List 2 address :", id(lst2))
print("List1 == list2 ->", lst1 == lst2)
print("List1 is list2 ->", lst1 is lst2)
print("---------------------------------------")
print()

lst2 = [1, 2, 3]
# lst2 = lst1.copy()
print("**** list1 , list2 ****")
print("List 1 address :", id(lst1))
print("List 2 address :", id(lst2))
print("List1 == list2 ->", lst1 == lst2)
print("List1 is list2 ->", lst1 is lst2)
print()

lst1[0] = 9
print("After changes.")
print("List 1 address :", id(lst1))
print("List 2 address :", id(lst2))
print("List1 == list2 ->", lst1 == lst2)
print("List1 is list2 ->", lst1 is lst2)
print()
