// Sum of two matrix 
                                           
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3], i ,j ;
    printf("Enter the elements of the matrix A : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix B : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        if(i==1&&j==3)
        printf("  +  ");
        else
        printf("     ");
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        if(i==1&&j==3)
        printf("  =  ");
        else
        printf("     ");
        for(j=0;j<3;j++)
        { 
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}