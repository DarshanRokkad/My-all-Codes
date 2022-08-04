// passing string to the function 
// Display the name passed from main funtion in the user defined function
#include<stdio.h>
void displayName(char []);
int main()
{
    char name[30];
    printf("Enter your name : ");
    gets(name);
    displayName(name);

    return 0 ;
}
void displayName(char name[])
{
    printf("Your name is %s\n",name);
}