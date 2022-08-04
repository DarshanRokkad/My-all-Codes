// if else in c 
// check the pressed key is alphabet or number or special character
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a key : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("You have entered lower case\n");
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("You have entered upper case\n");
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("You have entered a number\n");
    }
    else 
    {
        printf("You have entered special character\n");
    }

    return 0 ;
}