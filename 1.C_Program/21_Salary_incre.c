// if else usage
// increment salary according to salary and age 
#include<stdio.h>
int main()
{
    char name[30];
    int age  ,sa;
    printf("Enter your name : ");
    gets(name);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your salary : ");
    scanf("%d",&sa);
    if (age>=50)
    {
        if(sa<=60000)
        {
            printf("\n%s, You are %d years old and your salary is %d\n",name, age , sa);
            printf("so, your salary will be incremented 20000\n");
            sa = sa + 20000;
            printf("%s , your salary will become %d after incremented\n",name ,sa);
        }
        else
        {
            printf("\n%s, You are %d years old and your salary is %d\n",name, age , sa);
            printf("so, your salary will be incremented 10000\n");
            sa = sa + 10000;
            printf("%s , your salary will become %d after incremented\n",name ,sa);

        }
    }
    else 
    {
        printf("\n%s, You are %d years old and your salary is %d\n",name, age , sa);
        printf("so, your salary will be incremented 5000\n");
        sa = sa + 5000;
        printf("%s , your salary will become %d after incremented\n",name, sa);
    }

    return 0 ;
}