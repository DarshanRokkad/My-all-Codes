# Add and multiply the complex number 
# add => (a + ib) (c + id) = (a+c) + (b+d) i
# multiply => (a + ib) (c + id) = (ac - bd) + (ad + bc) i
class Complex():
    def __init__(self,a,b):
        self.re = a 
        self.im = b 

    def __str__(self):
        return f"{self.re} + {self.im} i"
    
    def __add__(a,b):
        return f"{a.re + b.re} + {a.im+b.im} i"
    
    def __mul__(a,b):
        real = (a.re*b.re) - (a.im*b.im)
        imag = (a.re*b.im) + (a.im*b.re)
        return f"{real} + {imag} i"

com1 = Complex(3,4)
com2 = Complex(6,8)
print("")
print("Complex number a :",com1)
print("Complex number b :",com2)
print("")
print("Addition of two complex number       :",com1+com2)
print("Multiplication of two complex number :",com1*com2)
print("")