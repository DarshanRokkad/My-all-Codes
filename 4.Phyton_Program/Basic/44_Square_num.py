# Printing the square , cube and square root of the given number 
class Calculator():
    def __init__(self,num):
        self.num = num

    def square(self):
        return self.num**2

    def cube(self):
        return self.num**3

    def sr(self):
        return self.num**(1/2)

number = Calculator(7)
print(f"square of  {number.num} = ",number.square())
print(f"cube of {number.num} =  ",number.cube())
print(f"square root of {number.num} = ",number.sr())