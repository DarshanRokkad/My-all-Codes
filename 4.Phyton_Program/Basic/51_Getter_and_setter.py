# The getter in python
class Employee():
    salary = 5600
    salaryBonus = 200

    @property
    def totalSalary(self):
        return self.salary + self.salaryBonus
    
    @totalSalary.setter
    def totalSalary(self,value):
        self.salaryBonus = value - self.salary
    
    def __str__(self):
        return f'''Employee salary : {self.salary}
Employee salary bonus : {self.salaryBonus}
Total salary : {self.totalSalary}'''

e = Employee()
print(e)
e.totalSalary = 6000
print("")
print(e)