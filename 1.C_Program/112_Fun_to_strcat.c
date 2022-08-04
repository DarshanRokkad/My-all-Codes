// Write the function to cancatinate two strings 
#include<stdio.h>
void strCat(char[],char[]);
int main()
{
    char name1[30] , name2[30] ;
    printf("Enter the string : ");
    gets(name1);
    printf("Enter another string : ");
    gets(name2);
    strCat(name1,name2);

    return 0 ;
}
void strCat(char n1[],char n2[])
{
    int len1 ,len2 ,i ;
    for(i=0;n1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;n2[i]!='\0';i++)
    {
        len2++;
    }
    // Cancatinate two strings 
    for(i=0;i<len2;i++)
    {
        n1[len1+i]=n2[i];
    }
    printf("The strings after cancatinating : %s\n",n1);
}