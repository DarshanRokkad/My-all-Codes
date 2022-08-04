//To check wheather number is prime or not 
#include<stdio.h>
int check();
int main()
{
    int num ; 
    printf("Enter the number to check whether it is prime or not: ");
    scanf("%d",&num);
    int result = check(num);
    if(result==0)
    printf("%d is prime\n",num);
    else 
    printf("%d is not prime\n",num);

    return 0;
}
int check(int num)
{
    int count = 0 , i ;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count = 1;
            break;
        }
    }
    if(num==1)
    count = 1;

    return count ; 
}