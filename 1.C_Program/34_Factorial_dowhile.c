// Finding the factorial of the number using do while 
#include<stdio.h>
int main()
{
    int num,f=1 ,i=1;
    printf("Enter the number to find the factorial : ");
    scanf("%d",&num);
    do
    {
        f = f * i;
        i++;
    } while (i<=num);
    printf("%d! = %d\n",num, f);
    
    return 0 ; 
}