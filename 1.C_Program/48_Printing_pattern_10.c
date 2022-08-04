// Printing pattern 10
//      *
//     ***
//    *****
//   *******
//  *********
// ************
#include<stdio.h>
int main()
{
    int i, j ,spa , row;
    printf("Enter number of row : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(spa=1;spa<=row-i;spa++)
        printf(" ");
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");            
        }printf("\n");
    }

    return 0 ;
}