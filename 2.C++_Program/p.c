// to compare and practise with c++
#include<stdio.h>
#include<stdlib.h> // When using storage classes like auto , register , static and external
#include<conio.h> // when using i/o funtions like getch , getche , putch
#include<math.h> // to perform math funtion like pow , sqrt 
#include<time.h> //  to perform any time opration like srand(time(0)) and num = rand()100+0;
int main()
{
    int n , i , data,flag=0 ;
    printf("Enter number elements in an array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the data to be searched : ");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]== data)
        {
            printf("%d is present at %d position \n",data,i+1);
            flag = 1 ;
            break;
        }
    }
    if(flag ==0)
    {
    printf("Element not found\n");
    }

    return 0 ;
}