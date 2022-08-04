// Factorial of a number using recursion
#include<stdio.h>
int fac(int );
int main()
{
    int n ;
    printf("Enter the number to find the factorial of the number : ");
    scanf("%d",&n);
    int result = fac(n);
    printf("%d! = %d\n",n,result);

    return  0 ;
}
int fac(int n)
{
    if(n==0)
    return 1;
    else 
    return n * fac(n-1);
}