class Rectangle :
    i = 90
    shape = "Rectangle"
    def __init__(self, l , b):
        self.length = l 
        self.breadth = b 
    def printDetails(self):
        print(f"Length : {self.length} and Breadth : {self.breadth}")
    def compare(self,r):
        return self.length == r.length and self.breadth == r.breadth
    @classmethod
    def getShape(cls):
        return cls.shape
    @staticmethod
    def info():
        print("Rectangle static method")

r1 = Rectangle(4,9)
r1.printDetails()
r2 = Rectangle(4,9)
r2.printDetails()

print(f"Both are equal {r1.compare(r2)}")

# instance variable and class variable demo 
print(f"{r1.i} {r2.i}")
r1.i = 20 
print(f"{r1.i} {r2.i}")
Rectangle.i = 50 
print(f"{r1.i} {r2.i}")

print(Rectangle.getShape())
Rectangle.info()