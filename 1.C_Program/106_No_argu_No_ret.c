// types of the funtion 
// Function without arguement and no return 
#include<stdio.h>
void sum(void); // we use void due to avoid taking arguements unessary 
int main()
{
    sum();

    return 0 ;
}
void sum()
{
    int a = 5 , b =9 ;
    printf("The sum of %d and %d is %d \n",a,b ,a+b);
}