// Transpose of a matrix 
#include<stdio.h>
int main()
{
    int row , col ,i ,j ;
    printf("Enter the number of row : ");
    scanf("%d",&row);
    printf("Enter the number of column : ");
    scanf("%d",&col);
    int a[row][col];
    // Taking input of the 2 D array 
    printf("Enter the elements of the array : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // printing the 2D array 
    printf("The elements of the 2D array is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    // Transpose of the matrix 
    printf("The transpose of the 2D array is \n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",a[j][i]);
        }printf("\n");
    }

    return 0 ;
}