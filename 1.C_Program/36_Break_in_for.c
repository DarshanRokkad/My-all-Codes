// usually break are used with if else in loops 
// take the input from user and sum it if user entered negetive number then break out of loop 
#include<stdio.h>
int main()
{
    int i , num , sum =0; 
    for(i=0;i<6;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        if(num<0)
        break;
        sum = sum + num;
    }
    printf("The sum is %d \n",sum );

    return 0 ; 
} 