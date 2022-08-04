# Here we are observing the class attribute
class Employee():
    company = "Micrsoft"

harry = Employee()
print(harry.company)
nisha = Employee()
# Here we are creating the instance attribute of the object nisha
nisha.company="Amazon"
print(nisha.company)

# Here we are changing the class attribute 
Employee.company = "Google"
print("\nAfter changing class attribute")
print(harry.company)
print(nisha.company)

# If there is no instance attribute and classes attribute then the code will give error
# print(nisha.name)