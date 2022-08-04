// finding sum of every third integer 
// 2 + 5 + 8 + 11 .... = ? -> 1650
#include<stdio.h>
int main()
{
    int i  , sum = 0;
    for(i=2;i<=100;)
    {
        sum = sum + i ;
        i = i + 3 ;
    }
    printf("Sum of every third integer from 2 to 100 is %d\n",sum);

    return 0 ;
}