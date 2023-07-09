# write a program to check the frequecy of a character in a string

st = input("Enter the string : ")
di = {}
for i in st:
    if i not in di.keys():
        di[i] = 1
    else:
        di[i] += 1

# for i in n :
#     di.setdefault(i,0)
#     di[i] += 1

print(di)