//Bubble sort taknig array from user 
#include<stdio.h>
int main()
{
    int i,j ,n ,flag ;

    printf("Enter the number elements in array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element of an array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        flag = 0 ;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tem;
                tem = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tem;
                flag = 1 ;
            }
        }
        if(flag==0)
        break;
    }
    
    printf("The sorted array is : ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}