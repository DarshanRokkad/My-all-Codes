// Pointer arithematic 
// printing the array elements using pointers 
#include<stdio.h>
int main()
{
    int n ,i ;
    printf("Enter number of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    } 
    printf("The elements of the array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    int *q =&arr[3];
    // the subtraction of the pointer gives the difference between the array elements
    int d  = q-ptr;
    printf("\nq-p=%d\n",d);

    return 0 ;
}