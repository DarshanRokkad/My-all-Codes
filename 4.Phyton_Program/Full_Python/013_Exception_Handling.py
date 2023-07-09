# Exception handling 
class CustomException(Exception):
    def __str__(self):
        return 'Exception raised !.. Division by zero.'

try: 
    a = int(input("Enter the number 1 : "))
    b = int(input("Enter the nubmer 2 : "))
    print()
    if b==0 :
        raise CustomException
    else :
        c = a/b
        print("{} / {} = {}".format(a,b,c))     
except CustomException as e :
    print(e)
else :
    print("In else block , No error in code.")    
finally:
    print("--- In finally block , Closing the file. ---")

print("bye friendz")
print()