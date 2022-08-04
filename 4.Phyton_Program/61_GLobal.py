# how to use global variables in the funtions
# these is used when you want to change or want to access the global variable 
a = 100
def fun():
    a = 8 
    print("Local variable : ",a)

def new():
    global a 
    print("In funtion : ",a)
    a = 200

fun()
print("Before : ",a)
new()
print("After : ",a)