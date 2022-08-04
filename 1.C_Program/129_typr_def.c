// using of type def in the c program 
#include<stdio.h>
typedef int integer ;
typedef char character ;
int main()
{
    integer i =9 ;
    character ch = 'y';
    printf("I = %d \n",i);
    printf("The character is \"%c\"\n",ch );

    return 0 ;
}