// Printing pattern 5
// 6 5 4 3 2 1 
// 6 5 4 3 2 
// 6 5 4 3  
// 6 5 4
// 6 5 
// 6 
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=6;i++)
    {
        for(j=6;j>=i;j--)
        {
            printf(" %d ",j);
        }printf("\n");
    }

    return 0 ;
}