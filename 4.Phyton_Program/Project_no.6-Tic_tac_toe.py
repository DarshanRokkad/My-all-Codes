def display_board(values):
    print("\n")
    print("------------------------------------------")
    print(f"|     {values[0]}       |      {values[1]}      |      {values[2]}     |")
    print("|     1       |      2      |      3     |")
    print("------------------------------------------")
    
    print(f"|     {values[3]}       |      {values[4]}      |      {values[5]}     |")
    print("|     4       |      5      |      6     |")
    print("------------------------------------------")

    print(f"|     {values[6]}       |      {values[7]}      |      {values[8]}     |")
    print("|     7       |      8      |      9     |")
    print("------------------------------------------")
    print('\n')

def check_board(values):
    result = None
    # checking horizontally
    if(values[0]==values[1]==values[2]):
        result=values[0]
    elif(values[3]==values[4]==values[5]):
        result=values[3]
    elif(values[6]==values[7]==values[8]):
        result=values[7]
    # checking vertically
    elif(values[0]==values[3]==values[6]):
        result=values[0]
    elif(values[1]==values[4]==values[7]):
        result=values[1]
    elif(values[2]==values[5]==values[8]):
        result=values[2]
    # checking diagonally
    elif(values[0]==values[4]==values[8]):
        result=values[0]
    elif(values[2]==values[6]==values[4]):
        result=values[2]
    # checking the empty space in the table 
    elif(values[0]!='-' and  values[1]!='-' and  values[2]!='-' and  values[3]!='-' and values[4]!='-' and  values[5]!='-' and  values[6]!='-' and values[7]!='-' and  values[8]!='-'):
        result = 0
    return result

def check_empty(value,ind):
    if value[ind]=="-":
        return 1 
    else:
        print("That place is occupied please choose another place")
        return 0

def display_winner(result):
    if result == 'X':
        print(f"************* {name_1.capitalize()} Won the match *************")
        exit()
    elif result == 'O':
        print(f"************* {name_2.capitalize()} Won the match *************")
        exit()
    elif result== 0:
        print("********** MATCH TIE **********")
        exit()

# Main function 
print(".......... Welcome to tac tac toe game by Darshan R.M. ...........\n")
print("Enter player 1 name : ")
name_1 = input()
print("Enter player 2 name : ")
name_2 = input()
value = ['-','-','-','-','-','-','-','-','-']
display_board(value)
for i in range (1,10,1):
    if i%2!=0:
        print(f"#### {name_1.capitalize()} turn ####")
        print("Enter your choice : ")
        choice = int(input())
        while(True):
            if check_empty(value,int(choice-1)):
                value[choice-1]="X"
                break
            else:
                print("Enter your choice : ")
                choice = int(input())
    else:
        print(f"#### {name_2.capitalize()} turn ####")
        print("Enter your choice : ")
        choice = int(input())
        while(True):
            if check_empty(value,int(choice-1)):
                value[choice-1]="O"
                break
            else:
                print("Enter your choice : ")
                choice = int(input())
    display_board(value)
    result = check_board(value)
    display_winner(result)