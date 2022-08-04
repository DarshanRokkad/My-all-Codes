// Read e to m and print the corresponding ascii value 
#include<stdio.h>
int main()
{
    char arr[3] ,ch1 , ch3 ;
    printf("Enter 3 character : ");
    for(int i=0 ;i<3 ;i++)
    {
        scanf("%c",&arr[i]);
    }
    ch1 = arr[0];
    ch3 = arr[2];
    while(ch1<=ch3)
    {
        printf("%c = %d\n",ch1  ,ch1 );
        ch1 ++;
    }

    return 0 ;
}