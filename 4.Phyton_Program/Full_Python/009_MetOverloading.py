# Default arguement parmeterized constructor
class Complex:
    def __init__(self,a=None,b=None):
    # def __init__(self,a=0,b=0): #<== only for integers
        self.real = a 
        self.img = b 
    def __str__(self):
        return f"{self.real} + {self.img} i"

c1 = Complex(4,6)
print(c1)
c2 = Complex()
print(c2)
# c3 = Complex("hi","bye")
# print(c3)




# -------------------------------------------- #
# Overriding of method in inheritance 
class A:
    def display(self):
        print("Method of A.")
class B(A):
    def display(self):
        print("Method of B.")
        # super().display()
    # pass

a = A()
a.display()
b = B()
b.display()