// if else in c 
// assigning grade of the student using marks as a condition
#include<stdio.h>
int main()
{
    char name[30];
    int marks ;
    printf("Enter your name : ");
    gets(name);
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("%s you are marks is %d\n",name , marks);
        printf("Your grade is A\n");
    }
    else if (marks>=75&&marks<90)
    {
        printf("%s you are marks is %d\n",name , marks);
        printf("Your grade is B\n");
    }
    else  if (marks>=60&&marks<75)
    {
        printf("%s you are marks is %d\n",name , marks);
        printf("Your grade is C\n");
    }
    else  if (marks>=45&&marks<60)
    {
        printf("%s you are marks is %d\n",name , marks);
        printf("Your grade is D\n");
    }
    else
    {
        printf("%s you are marks is %d\n",name , marks);
        printf("Your have failed\n");
    }

    return 0 ;
}