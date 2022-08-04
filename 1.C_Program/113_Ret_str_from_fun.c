// returning a string from a function 
#include<stdio.h>
char* display();
int main()
{
    char *str;
    str = display();
    printf("The string is %s\n",str);

    return 0 ;
}
char* display()
{
    char *str ="Jenny ";
    // return "jenny";
    // static char str[]="jenny";
    // const char* str[]="jenny"; // Need a const char* display() function
    return str ;
}