//Reversing of the given array

#include<stdio.h>
#include<stdlib.h>

void display();
void reverse();
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};

    printf("\n");

    display(arr,9);        //concentrate
    printf("\n");
    printf("\n");

    reverse(arr,9);        //concentrate
    printf("\n");
    printf("\n");

    /*swap(arr,10);            //concentrate
    printf("\n");    
    printf("\n"); */

    return 0;
}

//printing an array
void display(int *arr , int m)
{
    int i ;
    for (i=0;i<=m;i++)
    {
        printf("%d ", *arr);
        arr++;
    }
}

//reverse array by basic            // method number.1
void reverse(int *arr , int n)
{
    int i ; 
    arr = arr + n;
    for (i=0;i<=n;i++)
    {
        printf("%d ",*arr);
        arr--;
    }
}

//reverse array by swaping           //method number .2  
/*int swap(int arr[] , int n)
{
    int temp,i;
    //for swapping of elements
    for (i=0;i<=n/2 ;i++)
    {
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    //for printing the swapped array
    for (i=0;i<=n-1;i++)
    {
        printf("%d ",*arr);
        arr++;
    }
}*/