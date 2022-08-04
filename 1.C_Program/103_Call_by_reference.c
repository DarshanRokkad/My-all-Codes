//swaping a number by reference
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int * , int *);
int main ()
{
    int a = 5 ;
    int b = 8 ;
    printf("The value of a and b before swaping  is %d and %d\n", a , b );
    swap (&a , &b);
    printf("The value of a and b after swaping is %d and %d\n" , a , b );

    return 0;
}

void swap(int *x , int *y)
{
    int temp;
    temp = *x ;
    *x = *y ;
    *y=temp;
}
