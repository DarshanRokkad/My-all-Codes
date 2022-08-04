//Calculator using if else 
#include<stdio.h>
int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%d",&num2);

    if (op=='+')
    {
        printf("The sum of %d and %d is %d",num1 , num2 ,num1+num2);
    }   
    else if(op=='-')
    {
        printf("The subtract of %d and %d is %d",num1 , num2 , num1-num2);
    }else if(op=='*')
    {
        printf("The multiplication of %d and %d is %d",num1 , num2 ,num1*num2);
    }
    else if(op=='/')
    {
        printf("The divide of %d and %d is %d",num1 , num2 ,num1/num2);
    }
    else if ( op =='%')
    {
        printf("The reminder of %d and %d is %d",num1 ,num2 , num1%num2);
    }
    else
    {
        printf("Invalid operator!");
    }

    return 0;
}