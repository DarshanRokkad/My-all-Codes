#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap();
int main ()
{
    int a = 5 ;
    int b = 8 ;
    printf("In main function , The value of a and b before swaping  is %d and %d\n", a , b );
    swap (a , b);
   printf("In main function , The value of a and b after swaping is %d and %d\n" , a , b );

    return 0;
}

void swap(int x , int y)
{
    printf("In user function , The value of x and y before swaping  is %d and %d\n", x , y );
    int temp;
    temp = x ;
    x = y ;
    y=temp;
    printf("In user function , The value of x and y after swaping  is %d and %d\n", x , y );
}