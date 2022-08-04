# example for the super keyword
class Person():
    def __init__(self):
        print("Initaling the person")
    
class Employee(Person):
    def __init__(self):
        super().__init__()
        print("Intialing the employee")

class Programmer(Employee):
    def __init__(self):
        super().__init__()
        print("Intialing the Programmer")

pr = Programmer()