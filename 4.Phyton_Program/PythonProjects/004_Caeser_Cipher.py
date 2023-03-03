alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def ciper(text, shiftAmount, direction):
    answer = ""    
    if direction == 'decode':
        shiftAmount *= -1
    for i in text:
        if i in alphabets:
            answer += alphabets[(alphabets.index(i) + shiftAmount)%25]
        else :
            answer += i 
    print(f"'{text} is {direction}d to {answer}'")

while True:
    print('----------------------')
    direction = input("Enter 'encode' to Encode the text and 'decode' to Decode the text : ")
    if direction != 'encode' and direction != 'decode':
        break 
    text = input(f"Enter the text to be {direction}d : ").lower()
    shift = int(input("Enter the number of shift to be done : "))
    ciper(text,shift,direction)