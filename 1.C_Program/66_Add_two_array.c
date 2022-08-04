// Add the elements of the two array 
#include<stdio.h>
int main()
{
    int a[5],b[5],s[5],i;
    printf("Enter the elements of the array a : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the array b : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        s[i]=a[i]+b[i];
    }
    printf("The sum of the corresponding elements of the array is : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",s[i]);
    }

    return  0 ;
}