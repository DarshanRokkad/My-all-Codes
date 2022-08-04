// if else in c 
// check eligibity for dating 
#include<stdio.h>
int main()
{
    char name[30];
    int age ;
    printf("Enter your name : ");
    gets(name);
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("%s you are child\n",name);
        printf("You can't come to coffee with me \n");
    }
    else if (age>=18&&age<=25)
    {
        printf("%s you can date\n",name);
        printf("You can come to coffee\n");
    }
    else 
    {
        printf("%s you are old\n",name);
        printf("You can't come to coffee with me \n");
    }

    return 0 ;
}