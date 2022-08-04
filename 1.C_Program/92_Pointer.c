// Pointers in c 
#include<stdio.h>
int main()
{
    int a =10 , b=9;
    int *p, *q;
    p=&a , q=&b ;
    // printing the value of a in different ways 
    printf("Value of a : %d\n",a);
    printf("Value of a : %d\n",*p);
    printf("Value of a : %d\n",*(&a));
    printf("Value of b : %d\n",*q);
    // printing address in different ways
    printf("Address of a : %d\n",&a);
    printf("Address of a : %d\n",p);
    printf("Address of p : %d\n",&p);
    printf("Address of b : %d\n",q);
    printf("Address of q : %d\n",&q);
    q = p;
    printf("Value of a : %d\n",*p);
    printf("Value of a : %d\n",*q);
    // Even through two pointer pointing to same element they dont have same  address
    printf("Address of p : %d\n",&p);
    printf("Address of q : %d\n",&q);

    return  0;
}