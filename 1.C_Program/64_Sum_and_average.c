// calculate the sum and average of the marks of the student
#include<stdio.h>
int main()
{
    int n , i , sum=0 ;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the marks of the %d student : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        sum = sum + a[i];
    }
    int ave = sum / n;
    printf("the sum of the marks of the students is : %d \n",sum );
    printf("The average of the marks is %d \n", ave);
    
    return 0 ;
}