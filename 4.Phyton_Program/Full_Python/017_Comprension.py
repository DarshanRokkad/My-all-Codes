# list comprehension 
l = [i**2 for i in range(1,11) if i%3==0]
print("List comprehension : ",l)

# dictionary comprehension 
di = {ite:ite**2 for ite in range(1,11) if ite%3==0}
print("Dictionary comprehension : ",di)