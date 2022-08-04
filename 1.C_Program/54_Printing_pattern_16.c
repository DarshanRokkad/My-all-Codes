// Printing pattern 16
// E E E E E
// D D D D
// C C C
// B B
// A
#include<stdio.h>
int main()
{
    int i, j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %c ",'A'+i);
        }printf("\n");
    }

    return 0 ;
}