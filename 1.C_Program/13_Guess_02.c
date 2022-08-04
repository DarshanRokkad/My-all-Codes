// Guess output 
// logical operator
#include<stdio.h>
int main()
{
    int a=10 ,b=5 ,r ;
    r = (a<b)&&a++;
    printf("(a<b)&&a++ is %d\n",r);
    printf("a = %d\n",a);
    r = (a<b)||a++;
    printf("(a<b)||a++ %d\n",r);
    printf("a = %d\n",a);

    return 0 ;
}