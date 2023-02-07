# This is Multiple level inheritence and also super class keyword
class Person():
    country = "India"
    company = "Honda"
    def takeBreak(self):
        print("I am breathing")

class Employee(Person):
    def get(self):
        print(f"Salary of the employee is {self.salary}")
    def takeBreak(self):
        super().takeBreak() # this will run the takebreath method of the super class
        print("I am lucky!")
    # In the above method we have done function overloading

class Coder(Employee):
    company = "Fiver"
    def get(self):
        print("No limit to salary to the coder")
    def takeBreak(self):
        super().takeBreak() # this will run the takebreath method of the super class
        print("I am pro coder!")

p = Person()
e = Employee()
c = Coder()

p.takeBreak()
print('')
e.takeBreak()
print('')
c.takeBreak()
print('')

e.salary=299
e.get()
c.get()
print('')

print("The country of the person :",Person.country)
print("The country of the employee :",Employee.country)
print("The country of the coder :",Coder.country)

print('')
print("The company of the person :",Person.company)
print("The company of the employee :",Employee.company)
print("The company of the coder :",Coder.company)