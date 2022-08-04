// formatted input = scanf
// formatted output = printf
// unformatted input = getch , getchar , getche , gets 
// unformatted output = putch , putchar , puts
#include<stdio.h>
#include<conio.h>
int main()
{
    int age ;
    char name[30] , ch1 ,ch2 ,ch3  ;

    // this will take a whole string including space 
    printf("Enter your name : ");
    gets(name);
    // this will only one character from a bunch of character 
    printf("Enter the character : ");
    ch1 = getchar();
    // this will ecode and then print
    printf("Enter the character : ");
    ch2 = getche();
    // this will not ecode and print directly 
    printf("Enter the character : ");
    ch3 =getch();

    printf("\n");
    puts(name);
    printf("Ch1 :"); putchar(ch1); printf("\n");
    printf("Ch2 :"); putch(ch2); printf("\n");
    printf("Ch3 :"); putch(ch3); printf("\n");

    return 0 ;
}