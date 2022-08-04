// array of the function 
#include<stdio.h>
void sum(int a ,int b ){printf("a + b = %d\n",a+b);}
void sub(int a ,int b ){printf("a - b = %d\n",a-b);}
void mul(int a ,int b ){printf("a * b = %d\n",a*b);}
void div(int a ,int b ){printf("a / b = %d\n",a/b);}
int main()
{
    int ch , a, b ;
    void (*ptr[10])(int ,int )={sum,sub,mul,div};
    printf("Enter your chioce: ");
    scanf("%d",&ch);
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    (*ptr[ch])(a,b);

    return 0 ;
}