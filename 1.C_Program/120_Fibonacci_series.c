// Fibonic series - 0 1 1 2 3 5 8 13 21 .....
#include<stdio.h>
int fib (int n);
int main()
{
    int i , n ;
    printf("Enter the number elements of fibnoic elements you need : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",fib(i));
    
    return 0 ;
}
int fib (int n)
{
    if(n==0)
    return 0 ;
    else if(n==1)
    return 1; 
    else 
    return (fib(n-1)+fib(n-2));
}