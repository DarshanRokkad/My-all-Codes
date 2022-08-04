// Printing pattern 18
//  *********
//   *******
//    *****
//     ***
//      *
//      *
//     ***
//    *****
//   *******
//  *********
#include<stdio.h>
int main()
{
    int i, j , row , spa ;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for(i=row;i>0;i--)
    {
        for(spa=0;spa<row-i;spa++)
        printf(" ");
        for(j=0;j<(2*i)-1;j++)
        printf("*");
        printf("\n");
    }
    for(i=1;i<=row;i++)
    {
        for(spa=row-i;spa>0;spa--)
        printf(" ");
        for(j=1;j<=(2*i)-1;j++)
        printf("*");
        printf("\n");
    }

    return 0 ;
}