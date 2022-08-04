// Function pointer 
#include<stdio.h>
int sum (int ,int );
int main()
{
    int a , b ;
    int s =0 ;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    int (*ptr)(int , int )=&sum ;
    s = (*ptr)(a,b);
    printf("The sum of %d and %d is %d \n",a , b, s);

    return  0 ;
}
int sum (int a , int b )
{
    return a+b;
}