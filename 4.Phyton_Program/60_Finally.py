# Using finally block with try block 
try :
    a = int(input())
    c = 1 /a
except Exception as e :
    print(e)
# what ever may be the result the finally block will excute
finally :
    print("we are in finally block done!..")