# operator overloading in python 
# Here we are building the calculator by doing operator overloading 
class Number():
    def __init__(self,num):
        self.num = num
    # this is the dunder method to add two numbers
    def __add__(self,num2):
        return self.num + num2.num
    
    def __sub__(self,num2):
        return self.num - num2.num
    
    def __truediv__(self,num2):
        return self.num / num2.num

    def __floordiv__(num1,num2):
        return num1.num // num2.num

    def __mul__(self,num2):
        return self.num * num2.num

n1 = Number(5)
n2 = Number(4)
print(f"Two numbers are {n1.num} and {n2.num}\n")
print("The sum of two numbers : ",n1 + n2)
print("The subtraction  of two numbers : ",n1 - n2)
print("The multiplication of two numbers : ",n1 * n2)
print("The true div of two numbers : ",n1 / n2)
print("The floor div of two numbers : ",n1 // n2)