// printing pattern 21
// 1 1 1 1 1
// 1 2 2 2 1
// 1 2 3 2 1
// 1 2 2 2 1 
// 1 1 1 1 1 
#include<stdio.h>
int min(int ,int ,int ,int );
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    n = 2*n-1;
    int row , col ;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            int re =min(row,col,n-row , n-col);
            printf("%d ",re);
        }printf("\n");
    }

    return 0 ;
}
int min(int a , int b , int c , int d )
{
    if(a<=b&&a<=c&&a<=d)
    {
        return a;
    }
    else if(b<=a&&b<=c&&b<=d)
    {
        return b;
    }
    else if (c<=a&&c<=b&&c<=d)
    {
        return c+1;
    }
    else
    {
        return d+1;
    }
}