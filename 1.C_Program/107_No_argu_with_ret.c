// types of the funtion 
// Function without arguement and with return 
#include<stdio.h>
int sum(void); // we use void due to avoid taking arguements unessary 
int main()
{
    int result = sum();
    printf("The sum of 5 and 9 is %d \n",result);

    return 0 ;
}
int sum()
{
    int a = 5 , b =9 ;
    return a + b; 
}