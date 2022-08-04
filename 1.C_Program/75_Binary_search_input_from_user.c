//Binary full verified
#include<stdio.h>
int main()
{
    int n ,data , i  ;
    printf("Please enter the data in accending order .....!\n");
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value to the array : ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the number you need to search : ");
    scanf("%d",&data);

    int result = bsearch(arr , 0 , n-1 , data);
    if(result >= 0 )
        printf("element is found at %dth index",result);
    else 
        printf("Element not found ");

    return 0;
}

int bsearch(int arr[] , int l , int r , int data)
{
    if(l<=r)
    {
        int mid = (l+r)/2;
        if(data<arr[mid])
        return bsearch(arr,l,mid-1,data);
        else if(data>arr[mid])
        return bsearch(arr,mid+1,r,data);
        return mid;
    }
    return -1 ;
}