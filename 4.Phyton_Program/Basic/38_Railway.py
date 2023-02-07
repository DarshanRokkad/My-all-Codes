# taking data from the user to print the raliway form
class Railway():
    # This is the classes attribute if any one not entered the instance the classes attribute acts the default value
    train = "Rajadani express"
    def printData(self):
        print("Your name is", self.name)
        print("The train you have booked is",self.train,'\n')

# here we have have created the object called harry in the class in the Harry
harryApplication = Railway()
# Here we have the instance attribute .name
harryApplication.name = "Harry"
harryApplication.train = "Rajadani express"
harryApplication.printData()

darshanApplication = Railway()
darshanApplication.name = "Darshan rokkad"
# By commenting the below line the code will not through error because we have the classes attribute 
# darshanApplication.train = "Chennai express"
darshanApplication.printData()