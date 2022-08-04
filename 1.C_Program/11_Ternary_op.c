// Ternary operator ? :
// CHecking eligibity for voting 
#include<stdio.h>
int main()
{
    int age ;
    printf("Enter your age : ");
    scanf("%d",&age);
    (age>=18)?(printf("You are eligible\n")):(printf("You are not eligible\n"));

    return 0 ;
}