# write a program to guess the number from 1 to 10 with in 5 chance
import random
key = random.randint(1,10)
for i in range(5):
    n = int(input("Guess a number : "))
    if n == key :
        print(f"You have guessed correctly in {i+1} chance.")
        break
    elif n<key:
        print("Your guess is low.")
    else :
        print("Your guess is high.")
    print()
else :
    print("You have not guessed a number in 5 chance.")
    print(f"Secret number was {key}.")