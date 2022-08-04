// switch case to find the entered alphabet is consonant or vowel 
// using switch case and function
#include<stdio.h>
int fun(char);
int main()
{
    char ch ;
    printf("Enter a alphabet: ");
    scanf("%c",&ch);
    int result = fun(ch);
    if(result)
    printf("The entered character is a vowel\n");
    else 
    printf("The entered character is a consonant\n");

    return 0 ;
}
int fun(char ch )
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        return 1;
        break;
        default:
        return 0 ;
    }
}