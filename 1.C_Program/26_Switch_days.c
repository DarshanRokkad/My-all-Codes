// Switch case statement in c 
// corresponding days of the week using switch case 
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the number 1 - 7: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1 : 
        printf("Monday\n");
        break ;
        case 2 : 
        printf("Tuesday\n");
        break ;
        case 3 : 
        printf("Wednesday\n");
        break ;
        case 4 : 
        printf("Thursday\n");
        break ;
        case 5 : 
        printf("Friday\n");
        break ;
        case 6 : 
        printf("Saturday\n");
        break ;
        case 7 : 
        printf("Sunday\n");
        break ;
        default: 
        printf("Invalid input \n");
        
    }
    return 0 ;
}