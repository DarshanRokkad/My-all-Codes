// Read the elemets of the 2d array and find the sum 
#include<stdio.h>
int main()
{
    int row , col ,i ,j, sum  =0 ;
    printf("Enter the number of row : ");
    scanf("%d",&row);
    printf("Enter the number of column : ");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter the elements of the array : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements of the 2D array is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
            sum =  sum + a[i][j];
        }printf("\n");
    }
    printf("The sum of the elements of the array is %d\n",sum );

    return 0 ;
}