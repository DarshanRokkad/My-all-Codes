//multiplication of two matrix 
#include<stdio.h>
int main()
{
    int r1 , c1 , r2 , c2 , i ,j , k , sum ;
    printf("Enter the number row and column of matrix 1 : ");
    scanf("%d%d", &r1 , &c1);
    printf("Enter the number row and column of matrix 2 : ");
    scanf("%d%d", &r2 , &c2);

    if(c1==r2)
    {
        int a[r1][c1],b[r2][c2],m[r1][c2];
        printf("Multiplation is possible\n");
        //Take matrix 1 
        printf("Enter the value of matrix A : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        //Take matrix 2
        printf("Enter the value of matrix B : \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        //Logic for multiplication of matrix 
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum = 0 ;
                for(k=0;k<r2;k++)
                {
                    sum = sum + a[i][k]*b[k][j];
                }
                m[i][j]= sum ;
            }
        }
        //Printing the multiplied matrix 
        printf("The multiplication of two matrix is : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t", m[i][j]);
            }printf("\n");
        }
    }
    else 
    printf("Multiplication is not possible!");

    return 0 ;
}