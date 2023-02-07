# building the constructor for the class 
class Employee():
    def __init__(self,name,salary,job):
        # Here the name , salary and job are automatically assigned the attribute of the object
        self.name = name
        self.salary = salary
        self.job = job
    def PrintData(self):
        print(f'''\nName : {self.name}
Salary : {self.salary}
Job : {self.job}''')

harry = Employee("Harry",200000,"Youtube")
harry.PrintData()

darshan = Employee("Darshan",0,"Coder")
darshan.PrintData()