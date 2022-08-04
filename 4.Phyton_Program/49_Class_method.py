# we are using the @classmethod keyword
# the above key word is used to change the class attributes
class Employee():
    company = "Camel"
    salary = 1100
    location = "Delhi"

    # the below also  do the same function as of the classmethod keyword
    # def changeSalary(self,salary):
    #     self.__class__.salary = salary

    @classmethod
    def changeSalary(cls,salary):
        cls.salary = salary
        # we use this if any company gave increment to the all employee and for coming employees also

e = Employee()
print("Employees salary before change class attribute :",Employee.salary)
e.changeSalary(12000)
print("Employees salary after change class attribute :",Employee.salary)