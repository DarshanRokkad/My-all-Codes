# doing sum of two numbers using classed and objects
class Sum():
    def su(self):
        return self.a+self.b

e = Sum()
print(type(Sum()))
print(type(e),'\n')
e.a = 3 
print(type(e.a),'\n')
e.b = 8
print(e.su())