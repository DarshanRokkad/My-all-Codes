import random as r
option = ["Stone","Papper","Scissors"]
def asking_choice(player_name):
    while True:
        print("1. Stone .")
        print("2. Paper .")
        print("3. Scissors .")
        choice = int(input(f"{player_name} Select your choice : "))
        if choice in [1, 2, 3]:
            return option[(choice+1)%3]
        print("Enter valid choice.")


def check_winner(p1c, p2c):
    if p1c == p2c:
        return None
    elif (p1c == option[0] and p2c == option[2]) or (p1c == option[1] and p2c == option[0]) or (p1c == option[2] and p2c == option[1]):
        return 1
    else : 
        return 2


def continue_game():
    print("Press 1 to continue (or) Press 0 to exit.")
    while True:
        once_again = int(input("Enter your choice : "))
        print()
        if once_again == 1:
            return 1
        elif once_again == 0:
            return None
        else:
            print("Enter valid choice.")

def computer_choice():
    return option[r.randint(0,2)]

def choice_choosed(p1,p1c,p2,p2c):
    print(f"{p1} choiced {p1c}.")
    print(f"{p2} choiced {p2c}.")

print("---------------- Stone , Paper And Scissors Game ----------------")
player1 = input("Enter Player no.1 name : ")
# player2 = input("Enter Player no.2 name : ")
player2 = "Computer"
while True:
    player1_choice = asking_choice(player1)
    player2_choice = computer_choice()
    choice_choosed(player1,player1_choice,player2,player2_choice)
    winner = check_winner(player1_choice, player2_choice)
    if winner == None:
        print("Match is Drawn. \n")
        continue
    elif winner == 1:
        print(f"Congratulations {player1}...")
    else :
        print(f"Congratulations {player2}...")
    print("You won the game.\n")
    if continue_game() == None:
        break
print("******************* Thanks for playing game *******************")