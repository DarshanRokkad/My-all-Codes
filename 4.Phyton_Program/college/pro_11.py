def fact(n):
    # if n == 0 :
    #     return 1
    # return n * fact(n-1)
    if n == 0 : 
        return 1
    else : 
        f = 1
        for i in range (1,n+1):
            f = f*i
        return f

print(fact(5))

