// if else in c 
// check a number is even or odd and positive or negative 
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter your num : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number is even and ");
    }
    else 
    {
        printf("The number is odd and ");
    }
    if(num<0)
    {
        printf("The number is negative\n");
    }
    else 
    {
        printf("The number is positive\n");
    }

    return 0 ;
}