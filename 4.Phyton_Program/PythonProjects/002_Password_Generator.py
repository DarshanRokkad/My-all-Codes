import random
alphabet_lower = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                  'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
alphabet_upper = []
for i in alphabet_lower:
    alphabet_upper.append(i.upper())
symbol = ['@', '#', '$', '%', '&', '*', '!', '~']
number = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']
password = ""

# Type - 1 generator
total_len = int(input("Enter the number of characters : "))
for i in range(total_len):
    password+=random.choice([random.choice(alphabet_lower),random.choice(alphabet_upper),random.choice(number),random.choice(symbol)])

# Type - 2 generator
# no_alphabet = int(input("Enter the number of alphabet : "))
# no_symbol = int(input("Enter the number of symbol : "))
# no_number = int(input("Enter the number of number : "))
# ra_list = []
# for i in range(no_alphabet):
#     ra_list.append(random.choice([random.choice(alphabet_lower),random.choice(alphabet_upper)]))
# for i in range(no_symbol):
#     ra_list.append(random.choice(symbol))
# for i in range(no_number):
#     ra_list.append(random.choice(number))
# random.shuffle(ra_list)
# password = ""
# for i in ra_list:
#     password+=i

print(password)