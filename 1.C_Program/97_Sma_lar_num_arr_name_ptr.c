// Finding largest and smallest number using array name as a pointer 
#include<stdio.h>
int main()
{
    int n , i ;
    printf("Enter number of elements of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    int sma = a[0];
    int lar = a[0];
    for(i=0;i<n;i++)
    {
        if(*(a+i) < sma)
        sma = *(a+i);
        if(*(a+i) > lar)
        lar = *(a+i);
    }
    printf("The smallest number is %d\n",sma);
    printf("The largest number is %d\n",lar);

    return 0 ;
}