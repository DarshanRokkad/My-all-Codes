# Building Stoneone Paperper sc==sors in python
import random
from playsound import playsound

def winner(com,user):
    if com == 'Stone' and user == 'Scisors':
        ans =  False
    elif com == 'Stone' and user == 'Paper':
        ans =  True
    elif com == 'Paper' and user == 'Stone':
        ans =  False
    elif com == 'Paper' and user == 'Scisors':
        ans =  True
    elif com == 'Scisors' and user == 'Paper':
        ans =  False    
    elif com == 'Scisors' and user == 'Stone':
        ans =  True
    else:
        ans =  None
    
    print("\nYou choosed: ",user)
    print("Computer chossed : ",com)
    if ans == None:
        print("\n......... MATCH GOT DRAW .........\n")
        print("Please enter again!...")
        return 1
    # playsound("E:\\4.Phyton_Program\\winner-announcement-sound-effect.mp3")
    if ans:
        playsound("E:\\4.Phyton_Program\\Win_sound.mp3")
        print("\n~~~~~~~~~~~~ YOU WON ~~~~~~~~~~~~\n")
    else:
        playsound("E:\\4.Phyton_Program\\lose_sound.mp3")
        print("\n************ COMPUTER WON ************\n")
    return 0 

def gen_com():
    ra = random.randint(1,3)
    if ra == 1:
        return 'Stone'
    elif ra == 2:
        return 'Paper'
    else: 
        return 'Scisors'

def gen_user():
    user = int(input("Enter 1 for Stone, 2 for Paper and 3 for scisors : "))
    if user == 1:
        return 'Stone'
    elif user == 2:
        return 'Paper'
    else: 
        return 'Scisors'

while winner(gen_com(),gen_user()):
    continue