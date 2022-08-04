#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n ,i , j , co ,spa ,u=0 ;
    scanf("%d", &n);
    int  tem =n ;
    int r = n ;
  	// Complete the code to print the pattern.
    printf("\n");
    for(i=n-1;i>0;i--)
    {
      tem = n ;        
        for(j=1;j<=i;j++) 
        {
            printf("%d ",tem);
            tem --;
        }printf("\n");
    }
      
    return 0;
}