import random 

# Demo of shuffle -> it will shuffle the values of the index inside the list 
college_name = input("Enter your college name : ").split()
print(college_name)
random.shuffle(college_name)
print(college_name)

# Demo of choice ->  return a single element 
# decision = ['win','lose','draw']
# print(random.choice(decision))

# Demo of sample -> return a list of random element
# print(random.sample(decision,2))

# Demo of choices -> it will give the random list of values according to weights given to the element 
# scrath_card = ['₹100','Better luck next time','₹10']
# print(random.choices(scrath_card,cum_weights=(2,60,38),k=4))

# Demo of randint and randrange 
# print(random.randrange(10))
# print(random.randrange(2,10,2)) # Random even number 
# print(random.randint(1,10))