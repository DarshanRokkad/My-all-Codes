dictionary_list = [
    {   
        "Country": "India",
        "City_visited": ["Banglore", "Cheenai", "Mumbai"],
        "Total": 5
    },
    {
        "Country ": "America",
        "City_visited": ["Niter", "Puho", "Ehcoel"],
        "Total": 7
    }
]

def add_new_country(cou, tot ,vis):
    tem ={}
    tem["Country"] = cou
    tem["City_visited"] = vis
    tem["Total"] = tot
    dictionary_list.append(tem)

#displaying the list of dictionary 
def display(dictionary):
    for dicti in dictionary:
        for i in dicti:
            print(i + " -> " ,end='')
            print(dicti[i])
        print()

print("--   Initially   --")
display(dictionary_list)
add_new_country("Russia", 2, ["Moscow", "Saint Petersburg"])
print("--   After updation  --")
display(dictionary_list)