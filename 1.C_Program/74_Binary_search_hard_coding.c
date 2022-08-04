//Binary full verified
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int data ;
    printf("Enter the number you need to search : ");
    scanf("%d",&data);

    int result = bsearch(arr , 0 , 9 , data);
    if(result >= 0 )
    {
        printf("element is found at %dth index",result);
    }
    else 
    {
        printf("element is not found");
    }

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