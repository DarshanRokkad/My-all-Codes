// pointer to a pointer = Double pointer
#include<stdio.h>
int main()
{
    int a = 6;
    int *ptr;
    ptr=&a;
    printf("value of a : %d\n",*ptr);
    int **ptr1; // can store the address of the integer pointer 
    ptr1=&ptr;
    printf("Value of a : %d\n",*ptr);

    return 0;
}