# Hangman project
import random

# this function is used to display the answer 
def display(ans):
    print('-----------------------')
    for i in ans:
        print(i+' ', end='')
    print()
    print('-----------------------')

# This function is used to set character to answer
def setAnswer(an, key, gue):
    for i in range(len(key)):
        if key[i] == gue:
            # string are immutable so do it by slicing 
            an = an[:i] + gue + an[i+1:]
    return an 

# random list having string 
list_of_words = ['larry', 'cary', 'moe', 'headsman', 'deathsman']
key = random.choice(list_of_words)

#setting answer intially to dash 
answer = ''
for i in range(len(key)):
    answer += '_'
display(answer)

# Guess until remaining guesses
remaining_guesses = len(key)
while remaining_guesses:
    guess = input("Guess a character : ").lower()
    if key.count(guess) > 0:
        answer = setAnswer(answer, key, guess)
    else:
        remaining_guesses -= 1
    if answer.count('_') == 0 :
        print("You guessed it correct {}.".format(answer))
        print("You won the Game.")    
        break  
    print(f"You have still {remaining_guesses} chance to guess.")
    display(answer)  
    print()   
else: # This will execute only when loop is completely executed 
    print("You lost the Game.")