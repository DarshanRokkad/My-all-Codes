//largest and smallest number of n numbers without pointer 
#include<stdio.h>
int main()
{
    int n , i ;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers : ");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    int lar = a[0];
    int sma = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>lar)
        lar = a[i];
        if(a[i]<sma)
        sma = a[i];
    }
    printf("The largest number is %d\n",lar);
    printf("The smallest number is %d\n",sma);

    return 0 ;
}