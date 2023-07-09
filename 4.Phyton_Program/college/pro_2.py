while True :
    name = input("Enter your name : ")
    if name == 'Alice':
        while True :
            password = input("Enter the password : ")
            if password == 'sword':
                print("Correct user name and password.")
                break
            else :
                print("Incorrect password.")
        break
    else :
        print("Incorrect name.\nReenter your name.")