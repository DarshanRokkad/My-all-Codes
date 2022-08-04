# Finding the word in the file 
content = True
i=1
with open("36_content.txt","r") as f :
    while content :
        content = f.readline()
        if "python" in content.lower():
            print("Present!")
            print(i)
            i+=1