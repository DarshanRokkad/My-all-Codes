#Stone , Paper and scissor
import random
print("*** Welcome to Stone , Paper and Scissor Game ***")
name = input("Enter your name : ")

while True :
    # input from the user 
    Options = ['Stone', 'Paper', 'Scissor']
    Choosed = False
    while not Choosed :
        print("\n1. Stone\n2. Paper\n3. Scissor")
        num = int(input("Enter your choice : "))
        if num >= 1 and num<=3:
            user_choice = Options[num-1]
            Choosed = True 
        else:
            print("Invalid choice.")

    computer_choice = random.choice(Options)

    def isUserWinner(u, c):
        if (u == 'Stone' and c == 'Paper') or (u == 'Paper' and c == 'Scissor') or (u == 'Scissor' and c == 'Stone'):
            return False
        else:
            return True
        
    #result calculation
    print()
    if user_choice == computer_choice:
        print(f"-- Game is Draw --")
    elif isUserWinner(user_choice, computer_choice):
        print(f"✨✨ {name} , You Won the Game ✨✨")
    else:
        print(f"👎👎 {name} , You Lost the Game 👎👎")
    print(f"Computer choiced : {computer_choice}")
    print(f"Your choiced : {user_choice}\n")

    print("Do you want to Play again ('Y' or 'N') : ",end='')
    again = input().upper()
    if again == 'N':
        break