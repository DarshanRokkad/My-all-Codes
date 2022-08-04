// non tail recursion 
#include<stdio.h>
int  print(int );
int main()
{
    int x; 
    x= print(10);
    printf("%d\n",x);

    return 0 ;
}
int print(int n)
{
    if(n<1)
    {
        return ;   
    }
    return 1 + print(n/2);
}