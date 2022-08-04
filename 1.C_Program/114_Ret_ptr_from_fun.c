// Returning a pointer from a function 
#include<stdio.h>
int * returnPointer(int []);
int main()
{
    int * p;
    int a[5]={5,6,7,4,3};
    printf("a[0] = %d\n",a[0]);
    p=returnPointer(a);
    printf("a = a + 2 is %d\n",*p);

    return 0 ;
}
int * returnPointer(int a[])
{
    a=a+2;
    return a ;
}