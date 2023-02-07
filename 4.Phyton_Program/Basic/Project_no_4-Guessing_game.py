# Building guess game in python using oops 
import random

randNum = random.randint(1,100)
print(randNum)
userGuess = None
noGuesses = 1

# To print the previuos data
data=''
with open("project_no_4.txt","r") as f :
    content=f.read()
    data = content
    print(content)
    tem = ""
    highScore=""
    for i in range (len(content)-1,0,-1):
        if content[i].isdigit():
            tem +=content[i]
        else:
            break
    for i in range (len(tem)-1,-1,-1):
        highScore+=tem[i]

# Game
name = input("\nPlease enter your name : ")
while randNum!=userGuess:
    userGuess = int(input("\nGuess the number form 1 to 100 : "))
    if userGuess == randNum :
        print(f"Congralations, You have guessed it right!..\nYou took {noGuesses} chance to guesses")
        break
    elif userGuess<randNum:
        print(f"You guessed it wrong!\nplease guesses the larger number than {userGuess}")
    else :
        print(f"You guessed it wrong!\nplease guesses the smaller number than {userGuess}")
    noGuesses+=1

# Using file to set high score
if noGuesses > int(highScore):
    print("\n**** N O     C H A N G E     I N     H I G H    S C O R E *****")
    print(data)
elif noGuesses < int(highScore):
    print("\n**********  C O N G R A T U L A T I O N S ***********")
    print("*** Y O U    S E T   N E W    H I G H   S C O R E ***")
    with open("project_no_4.txt","w") as f :
        newData = f"***** H I G H    S C O R E *****\n    Name : {name}\n    Chance : {noGuesses}"
        f.write(newData)
else : 
    print("\n************....  C O N G R A T U L A T I O N S .....*************")
    print("*** Y O U    S C O R E D    S A M E   A S   H I G H   S C O R E ***")
    with open("project_no_4.txt","a") as f :
        newData = f"\n\n    Name : {name}\n    Chance : {noGuesses}"
        f.write(newData)

a=input("\n!!!! Press any key to exit terminal !!!!")