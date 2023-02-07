# use of strip keyword in python
this = "Harry    is    a    good    boy"
def remove(st,name):
    new = st.replace(name,"")
    return new.strip()

print(this)
print(remove(this,"Harry"))