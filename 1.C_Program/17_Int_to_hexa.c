//convertion  decimal number to  hexadecimal number
#include<stdio.h>
int main()
{
    int n ;
    char hexadecimal; 
    printf("Enter a decimal number from 0-15 : ");
    scanf("%d", &n);
    hexadecimal = (n <= 9) ? (n +'0') : (n-10+'a') ;
    printf("%d -> %c ", n , hexadecimal);

    return 0;
}