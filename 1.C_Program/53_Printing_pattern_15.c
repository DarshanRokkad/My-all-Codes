// Printing pattern 15
// A
// B B
// C C C
// D D D D
// E E E E E
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