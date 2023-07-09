class Employee:
    def __init__(self,f,l):
        self.first = f 
        self.last = l

    @property
    def email(self):
        return f"{self.first}{self.last}@gmail.com"
    @property 
    def fullname(self):
        return f"f=>{self.first} l=>{self.last}"
    
    @fullname.setter
    def fullname(self,name):
        fir , las = name.split(' ')
        self.first = fir 
        self.last = las
    @fullname.deleter 
    def fullname(self):
        self.first = None
        self.last = None

emp1 = Employee("darshan","rokkad")
print(emp1.email)
emp1.first = 'sinchana'
print(emp1.email)
print()

print(emp1.fullname)
emp1.fullname = 'Darshan RM'
print(emp1.fullname)
del emp1.fullname
print(emp1.fullname)