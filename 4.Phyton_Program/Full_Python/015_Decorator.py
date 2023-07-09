# deorator are the function that takes the functino as an arguement and add the additionality to the funciton and return the function 

def smart_div(func):
    def inner(a,b):
        print("altered the arguements.")
        if a<b:
            a,b = b,a 
        return func(a,b)
    return inner

@smart_div
def div(a,b):
    print(a/b)
    
@smart_div
def sub(a,b):
    print(a-b)

# div = smart_div(div) # avoiding by adding smart div
# works as a decorator function  
div(2,4)
sub(2,4)