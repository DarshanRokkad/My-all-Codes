# Tuples in python  = These are immutable 
a = ()
print(type(a))
a = (3,)
print(a)
a = (5,7,3,8,5,3,3)
#    0,1,2,3,4.....
print(a)
print("the element at index 3 : ",a[3])
# a[3]=(5) elements in tuple are immutable
b = (5,4,6)
c = a+b
print("We add two sets : ",c)
# Some of the tuple function in python
print("\nNumber of 3 present in the tuple ",a.count(3))
print("The index at which the first 3 is present ",a.index(3))