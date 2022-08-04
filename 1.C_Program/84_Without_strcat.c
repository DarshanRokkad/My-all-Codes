// Concatenating two string without using header file 
#include<stdio.h>
int main()
{
    char fname[20],lname[20];
    int len1=0 , len2=0 ,i=0 ;
    printf("Enter the first name : ");
    gets(fname);
    printf("Enter your last name : ");
    gets(lname);
    while(fname[i]!='\0')
    {
        len1++;
        i++;
    }
    i=0;
    while(lname[i]!='\0')
    {
        len2++;
        i++;
    }
    for(int j=0 ; j<len2;j++)
    {
        fname[len1+j]=lname[j];
    }
    printf("Full name: %s\n",fname);

    return 0;
}