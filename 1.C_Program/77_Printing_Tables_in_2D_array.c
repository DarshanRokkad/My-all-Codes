//printing of 3 table in 3 row in 2D array

#include<stdio.h>

int main()
{
    int i,j,row;
    int multi[i][10];            //2D array
    int num[i];                  //1D array

    printf("How many number of table you want to print: ");
    scanf("%d",&row);
    printf("\n");

    //for asking of which tables
    for (i=0;i<row;i++)
    {
        printf("Enter the table you want to print in %dth row: ",i+1);
        scanf("%d",&num[i]);
    } 
    printf("\n");

    //For storing of tables
    for (i=0;i<row;i++)
    {
        for (j=0;j<10;j++)
        {
            multi[i][j] = num[i] * (j+1);
        }
    }
    
    //For printing of array of tables
    for (i=0;i<row;i++)
    {
        for (j=0;j<10;j++)
        {
            printf("%d ", multi[i][j]);
        } printf("\n"); 
    }

    return 0;
}