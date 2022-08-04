// find the x to the power n ex: 2^3=8
// Recursion 
#include<stdio.h>
int po(int ,int );
int main()
{
    int x , n ;
    printf("Enter the number and to its power : ");
    scanf("%d%d",&x,&n);
    int r = po(x,n);
    printf("%d to the power %d is %d\n",x,n,r);

    return 0 ;
}
int po(int x , int n )
{
    if(n==0)
    return 1; //2 power 0 = 1
    else
    return x* po(x,n-1); // 2 * po(2,3)
}