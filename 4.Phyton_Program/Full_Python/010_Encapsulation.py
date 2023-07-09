class Atm:
    def __init__(self,a):
        self.__pin = a # here pin is a private data member 

def createObj():
    return Atm('234')

a = createObj()

# print(a.__pin) # it is abstraction we cannot access it 
print(a._Atm__pin)

a._Atm__pin = 89
print(a._Atm__pin)
