# To aviod self key word in the method
class Employee():
    # This staticmethod is used when the self parameter is not required
    @staticmethod
    def greet():
        print("Hello user! , welcome to the world of Phantom") 
        
harry = Employee()
harry.greet()