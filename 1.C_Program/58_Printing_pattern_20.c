#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
int main() 
{

    int n ,i , j ,spa ,u =1  ;
    scanf("%d", &n);
    int  tem=n,r ;
    for(i=n;i>0;i--)
    {
        for(j=n;j>=i;j--) 
        printf("%d ",j);
        for(spa=0;spa<(2*n)-1-(2*u);spa++) 
        printf("%d ",i);   
        u++;
        for(j=tem;j<=n;j++)
        {
          if(j!=1)
          printf("%d ",j);
        }
        tem -- ;
        printf("\n");
    }
    int k = 2,m=1;
    for(i=n-1;i>0;i--)
    {
        tem = n ;        
        for(j=1;j<=i;j++) 
        {
            printf("%d ",tem);
            tem --;
        }
        for(spa=1;spa<=(2*m)-1;spa++) 
        printf("%d ",k);  
        k++;
        m++;

        r=n-i+1;
        for(j=1;j<=i;j++)
        {          
          printf("%d ",r);
          r++ ;
        }
        printf("\n");
    }
      
    return 0;
}