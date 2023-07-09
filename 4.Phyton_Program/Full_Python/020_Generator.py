
# generator function - whcih will not destroy after every call it will pause after every call
def demo_gen():
    yield "first"
    yield "second"
    yield "third"
gen = demo_gen()
print(next(gen))
# it continue where it pause
for i in gen:
    print(i)
print()
print("---------------------------")

##############################################################################

def myrange(st , en):
    for i in range (st , en):
        yield i 
for j in myrange(1,10):
    print(j)
print()
print("---------------------------")


##############################################################################
def rangesq(num):
    for i in range(1,num+1):
        yield i*i
for i in rangesq(10):
    print(i)
print()
print("--------------------------")



##############################################################################
# generator comprehension
import sys
li = [i*i for i in range(1,1000)]
print(sys.getsizeof(li)/1024,"MB for list.")

sqU = (i*i for i in range(1,1000))
print(sys.getsizeof(sqU)/1024,"MB for generator.")
# for i in sqU:
#     print(i)