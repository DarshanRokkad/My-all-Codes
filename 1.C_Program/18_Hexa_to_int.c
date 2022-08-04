//convertion  hexadecimal number to decimal number 
#include<stdio.h>
int main()
{
    int n ;
    char hexadecimal; 
    printf("Enter a hexadecimal number from 1-f : ");
    scanf("%c", &hexadecimal);
    n = (hexadecimal < 'a') ? (hexadecimal - '0') : (hexadecimal - 'a' + 10) ;
    printf("%c -> %d ", hexadecimal , n);

    return 0;
}