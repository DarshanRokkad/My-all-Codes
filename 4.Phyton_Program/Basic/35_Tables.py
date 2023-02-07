# Generating tables from 1 to 20 and then storing in file
for i in range (2,21):
    with open (f"table{i}.txt","w") as f :
        for j in range (1,11):
            f.write(f"{i} X {j} = {i*j}")
            if j!=10:
                f.write(f"\n")