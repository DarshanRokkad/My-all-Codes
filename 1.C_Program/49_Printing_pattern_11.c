// Printing pattern 11
// ************
//  *********
//   *******
//    *****
//     ***
//      *
#include<stdio.h>
int main()
{
    int i, j ,spa , row;
    printf("Enter number of row : ");
    scanf("%d",&row);
    for(i=row;i>0;i--)
    {
        for(spa=row;spa>=i;spa--)
        printf(" ");
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }printf("\n");
    }

    return 0 ;
}