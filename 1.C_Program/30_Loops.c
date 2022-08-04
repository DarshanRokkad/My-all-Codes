// For loop
// printing the from 1 to 10 
#include<stdio.h>
int main()
{
    int i = 1 ;
    for(i = 1 ;i<11;i++)
    printf("%d ",i );
    printf("\n");
    while(i<21)
    {
        printf("%d ",i );
        i++;
    }    
    printf("\n");
    do{
        printf("%d ",i );
        i++;
    }while(i<31);

    return 0 ;
}