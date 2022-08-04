# This is the inheritence 
# The class is the parent class
class Employee():
    company = "Google"
    def lan(self):
        print(f"The salary of the employee is {self.salary}")

    @staticmethod
    def showDetails():
        print("This is an Employee")

# The below class is the derived class 
class Programmer(Employee):
    company = "Microsoft"
    language = "Python"
    # This is funtion overloading
    @staticmethod
    def showDetails():
        print("This is an Programmer")

e = Employee()
p = Programmer()
e.showDetails()
p.showDetails()
print("Employee company : ",e.company)
print("Programmer company : ",p.company)
# print(e.language) # This will give error
print("Programmer language : ",p.language)
p.salary = 200000
e.salary = 100000
p.lan() # This wil not give error beacause the method is present in the parent class 
e.lan() 