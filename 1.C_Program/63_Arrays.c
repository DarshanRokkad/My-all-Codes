// Array declaration , intialization and  accessing 
// print the array from last to first 
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the 5 elements of the array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]); // or a+i
    }
    printf("The elements of the array : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
    printf("Array from last of the element : ");
    for(i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0 ;
}