// Swaping the two elements of the array 
#include<stdio.h>
void  swap (int * , int * );
int main()
{
    int n , i ;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int in ,ind ;
    printf("Enter the index of two elements in the array to swap them : ");
    scanf("%d %d",&in,&ind);
    swap(&a[in],&a[ind]);
    printf("The elements of the array after swaping  : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    return 0 ;
}
void swap(int *p ,int *q )
{
    int tem ;
    tem = *p;
    *p = *q ;
    *q = tem ;
}