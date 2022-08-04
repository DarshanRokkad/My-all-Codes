// Guess output
#include<stdio.h>
int main()
{
    int i , j  ;
    for(i=1,j=0;i<5,j<=6;i++,j++); // because we are terminating the loop here
    printf("%d %d\n",i,j); // output is 8 , 7 

    return 0 ;
}