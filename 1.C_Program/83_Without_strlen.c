// performing the operation of the strlen funtion without using of sting header file
// finding the length of string without using strlen 
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name : ");
    gets(name);
    int i = 0,count=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("The length of %s is %d\n",name,count);

    return 0;
}