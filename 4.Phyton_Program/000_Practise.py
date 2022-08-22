from lib2to3.pytree import type_repr


a=[1,2,3,'4']
def sum(n):
    t=0
    try:
        for i in n:
            t+=i
        print(t)
    except:
        print("sone")
    except TypeError:
        print("w")
sum(a)