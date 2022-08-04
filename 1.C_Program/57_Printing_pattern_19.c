// Printing pattern 19
//       *        *
//       **      **
//       ***    ***
//       ****  ****
//       **********
//       ****  ****
//       ***    *** 
//       **      **
//       *        *
#include<stdio.h>
int main()
{
    int i , j , spa ,row ;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {        
        for(j=0;j<=i;j++)
        printf("*");
        for(spa=1;spa<((2*row)-1)-(2*i);spa++) //important point = ((max no of stars)-1)->[(no of spaces for first line)]-(2*i)
        printf(" ");
        for(j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(i=row-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        printf("*");
        for(spa=(2*row)-(2*i);spa>0;spa--) //important point = (max no of stars)-(2*i) = 10-8=2
        printf(" ");
        for(j=0;j<i;j++)
        printf("*");
        printf("\n");
    }

    return 0 ;
}