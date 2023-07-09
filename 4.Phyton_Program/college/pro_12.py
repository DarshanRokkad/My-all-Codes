def fib(n):
    if n ==0 or n==1:
        return n 
    else :
        # return fib(n-1)+fib(n-2)
        f = 0 
        s = 1
        for i in range(n-1):
            temp = s
            s = f + s
            f = temp
        return s

n = int(input('Enter the number : '))
for i in range(n+1):
    print(fib(i),end=' ')