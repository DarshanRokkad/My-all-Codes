// Absolute value 
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    (num<0)?(printf("%d is the absoulte value\n",num*-1)):(printf("%d is the absoulte value\n",num));

    return  0;
}