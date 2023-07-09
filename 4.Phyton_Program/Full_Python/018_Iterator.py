
print()
# memory usage in the terms of list for range of values
l = [x for x in range(1000)]
import sys 
print("Memory usage for list => (in MB)",sys.getsizeof(l)/1024)

# memory usage in terms of the iterable
x = range(1,1000)
print("Memory usage for loop(iterator) => (in MB)",sys.getsizeof(x)/1024)

print("TO check whether the varibale is iterator or not ")
# if the below is one then it is an iterable 
print(dir(x).count('__iter__'))

print()
print("------------------------------")

L = [1,2,3]
it = iter(L)
print("Type of L(iterable) :",type(L))
print("Type of it(iterator) :",type(it))
print()
print('L[0] =',next(it))
print('L[1] =',next(it))
print('L[2] =',next(it))
# print('L[3] =',next(it))