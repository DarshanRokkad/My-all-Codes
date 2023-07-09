class Complex :
    def __init__(self,r,i):
        self.real = r 
        self.img = i 
    def __str__(self):
        return f"{self.real} + {self.img} i"
        # return "{} + {} i".format(self.real,self.img)
    def __add__(self,c):
        su = Complex(self.real + c.real,self.img + c.img)
        return su
    def __gt__(self,c):
        return self.real+self.img > c.real+c.img
    def __eq__(self,c):
        return self.real==c.real and self.img==c.img

c1 = Complex(5,2)
print(c1)
c2 = Complex(5,2)
print(c2)
print("Sum of 2 complex number : ",end="")
c3 = c1 + c2 
print(c3)
print(c1>c2)
print(c1==c2)