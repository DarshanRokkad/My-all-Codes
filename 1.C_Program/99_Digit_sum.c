// Find the sum of the digits ex: number = 892 then sum =  8+9+2 = 19
#include<stdio.h>
int main()
{
    int num,nu,sum=0;
    printf("Enter the one number : ");
    scanf("%d",&nu);
    num=nu;
    while(num!=0)
    {
        sum = sum + (num%10);
        num = num /10;
    }
    printf("Sum of digit of %d is %d\n",nu,sum);    

    return 0 ;
}