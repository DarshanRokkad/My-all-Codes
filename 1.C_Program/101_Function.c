// Writing function to do sum of the two numbers
// Sum of the numbers
int sum(int ,int );
#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    sum(a,b);

    return 0 ;
}
int sum ( int a , int b )
{
    int sum = a+b ;
    printf("The sum of %d and %d is %d\n",a,b ,sum );
}