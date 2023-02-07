# some other dunder method in the python other the operators 
class ex():
    def __init__(self,name):
        self.name = name

    def __len__(self):
        return len(self.name)

    # Important most we use this
    def __str__(self):
        return f"Your name is {self.name}"
    
i = ex("Darshan")
print(str(i))
print(f"The length of the {i.name} is",len(i))