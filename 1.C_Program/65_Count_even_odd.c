// Count the number of even and odd number in the array 
#include<stdio.h>
int main()
{
    int i , a[10],co=0,ce=0;
    printf("Enter the even and odd number : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    printf("The number of even number is %d \n",ce);
    printf("The number of odd number is %d\n",co);

    return 0 ;
}