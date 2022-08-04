// using of void pointer 
#include<stdio.h>
int main()
{
    int a = 6 ;
    char b = 'J';
    float c = 5.6;
    // void pointer can store the address of different data type
    void *ptr;
    // before using a void pointer we have to type cast it
    ptr = &a;
    printf("Value of a : %d\n",*(int *)ptr);
    ptr = &b ;
    printf("Value of b : %c\n",*(char*)ptr);
    ptr = &c ;
    printf("Value of c : %f\n",*(float*)ptr);

    return 0 ;
}