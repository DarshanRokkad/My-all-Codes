//Leap year using tertinary operator 
#include<stdio.h>
int main ()
{
    int year ;
    printf("Enter the year to check wheather it is leap year or not : ");
    scanf("%d",&year);
    (year%4==0&&year%100!=0||year%400==0)?(printf("%d is a leap year\n",year)):(printf("%d is not a leap year\n",year));

    return 0;
}

//leap year or not using if else 
/* 
if(year%400==0)
printf("Leap year");
else if ( year%100==0)
printf("Not a leap year");
else if(year%4==0)
printf("Leap year ");
else 
printf("Not a leap year ");
*/