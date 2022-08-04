#include <stdio.h>
#include <stdlib.h>
// reversing array by swaping the elements 
int main()
{
    int num, *arr, i ,tem;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int len = num ;
    for(i=0;i<=(len-1)/2;i++)
    {
      tem = *(arr+i);
      *(arr+i) = *(arr+len-i-1);
      *(arr+len-i-1) =tem ;
    }
    // for(i=len-1;i>=0;i--)
    // {
    //     printf("%d ",*(arr+i));
    // }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}