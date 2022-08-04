// Finding the factorial of the number using indirect recursion 
#include<stdio.h>
int fac1( int );
int fac2( int );
int main()
{
    int n ;
    printf("Enter the number you want to find the factorial : ");
    scanf("%d",&n);
    printf("%d! = %d \n",n , fac1(n));

    return 0 ;
}
int fac1 (int n )
{
    if(n==0)
    {
        return 1 ;
    }
    return n * fac2(n-1);
}
int fac2(int n )
{
    if(n==0)
    {
        return 1 ;
    }
    return n*fac1(n-1);
}