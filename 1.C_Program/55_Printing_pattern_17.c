// Printing pattern 17
// A B C D E 
// A B C D 
// A B C 
// A B 
// A
#include<stdio.h>
int main()
{
    int i, j;
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" %c ",'A'+j);
        }printf("\n");
    }

    return 0 ;
}