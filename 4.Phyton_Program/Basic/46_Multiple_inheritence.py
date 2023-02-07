# The is multiple level inheritence 
class Employee():
    company = "Walmart"
class Freelancer():
    company = "Google"
    product = "Keyword"
# The below class is the derived class from two above class
class Programmer(Employee,Freelancer):
    name = "Rohit"

e = Employee()
f = Freelancer()
p = Programmer()
print("The company of the Employee :",e.company)
print("The company of the Free lancer :",f.company)
print("The company of the Prgrammer :",p.company) # This will take the information from the first class which will be sent in the parameters
print("\nThe product of the Free lancer :",f.product)
print("\nThe product of the Programmer :",p.product) # it will take the product which is the dericed parent class
print(p.name)