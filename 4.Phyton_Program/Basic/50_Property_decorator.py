# use of property decorator - @property
# these will do the funtion of the getter funtion
class Employee():
    company = "Google"
    sal = 4000
    sal_bonus = 500

    @property
    def totalSalary(self):
        return self.sal + self.sal_bonus

e = Employee()
print("Salary of the employee :",e.totalSalary)