//Linear search in C 
//Take an array input from user and search a data in it

#include<stdio.h>
int main()
{
    int i , data , n , flag = 0 ;

    printf("Enter the number elements in array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element of an array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the data you want to search : ");
    scanf("%d",&data);

    for(i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            printf("the data is present at %dth index",i);
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The element is not found!");
    }

    return 0;
}