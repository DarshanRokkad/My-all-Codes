// types of the funtion 
// Function with arguement and with return 
#include<stdio.h>
int sum(int , int );  
int main()
{
    int a , b ;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    int result = sum(a,b);
    printf("The sum of %d and %d is %d \n",a,b ,result);

    return 0 ;
}
int sum(int a , int b )
{
    return a+b;
}