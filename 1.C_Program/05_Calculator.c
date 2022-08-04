// Basic calculator in c 
#include<stdio.h>
int main()
{
    int a , b ;
    char op;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%d",&b);
    switch(op)
    {
        case '+':
        printf("The sum of %d and %d is %d \n",a , b , a+b);
        break;
        case '-':
        printf("The subtration of %d and %d is %d \n",a , b , a-b);
        break;
        case '*':
        printf("The multiplication of %d and %d is %d \n",a , b , a*b);
        break;
        case '/':
        printf("The division of %d and %d is %d \n",a , b , a/b);
        break;
        case '%':
        printf("The sum of %d and %d is %d \n",a , b , a%b);
        break;
        default: 
        printf("Invalid operator !\n");
    }

    return 0 ;
}