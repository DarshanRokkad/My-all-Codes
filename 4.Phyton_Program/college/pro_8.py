# write a program to sort the keys in alphabetical order
tel_dir = {'tom':3491,'jerry':8135,'mickey':1534}

print(tel_dir)

li = list(tel_dir.keys())
li.sort()

for i in li :
    print(i ,tel_dir[i])