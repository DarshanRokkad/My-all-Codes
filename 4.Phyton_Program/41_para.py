# passing parameters to the method
class Employee():
    def GetSalary(self,sign):
        print(f"Your name is {self.name} and you will get salary of {self.salary} and you have {sign}")

harry = Employee()
harry.name="Harry"
harry.salary = 4892042
harry.GetSalary("Da....")
