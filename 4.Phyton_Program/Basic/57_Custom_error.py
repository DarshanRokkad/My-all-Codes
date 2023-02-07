# creating the customized error
while True :
    print("Enter q to quit")
    a = input("Enter number : ")
    if a == 'q':
        break
    # the below block is to handle error 
    # if user enter character instead of integer
    try : 
        a = int(a)
        a = 1 /0
    except ZeroDivisionError:
        print("Zero Division Error!..")
    except:
        print("Error occured!...\n")

print("\n the game is over")