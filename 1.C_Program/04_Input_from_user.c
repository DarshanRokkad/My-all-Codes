// Taking input from the user 
#include<stdio.h>
int main()
{
    char name[20];
    int age ;
    printf("Enter your name : ");
    gets(name);
    printf("Enter your age : ");
    scanf("%d",&age );
    printf("Your name is %s and you are %d years old \n",name , age);

    return 0 ;
}