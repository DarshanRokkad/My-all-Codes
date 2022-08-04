//This the secreat key genrator 
//Name : Darshan.R.M.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   
    int num1,num2;
    char c1,c2,c3; 

    srand(time(0));
    num1 = rand()%999+100;
    num2 = rand()%99+11;
    c1   = rand()%65+90;
    c2   = rand()%65+90;
    c3   = rand()%65+90;

    printf("Your secret key is %c%d%c%c%d",c1,num1,c2,c3,num2);

    return 0;
}