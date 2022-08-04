// Uniary operator = Post and Pre increment , Post and Pre decrement
#include<stdio.h>
int main()
{
    int a = 8 ;
    printf("a = %d\n",a);
    // Post increment
    printf("a++ = %d\n",a++);
    printf("a = %d\n",a);
    // Pre increment
    printf("++a = %d\n",++a);
    printf("a = %d\n",a);
    // Post decrement
    printf("a-- = %d\n",a--);
    printf("a = %d\n",a);
    // Pre decrement
    printf("--a = %d\n",--a);
    printf("a = %d\n",a);

    return 0 ;
}