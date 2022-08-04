// Recursion means function calling itself 
#include<stdio.h>
int  display(int);
int main()
{
    int n = 3 ;
    display(n);

    return 0 ;
}
int  display(int n )
{
    if(n<1)
    {
        return n ;
    }    
    else 
    {
        printf("%d\n",n);
        display(n-1);
        printf("%d\n",n);
    }
}