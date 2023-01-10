#include <stdio.h>
int main()
{
    int n;
    // size of array by user  
    printf("Enter number of element the array : ");
    scanf("%d", &n);
    // array element input 
    printf("Enter the elements of the array : ");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // for which element next element needed 
    int x;
    printf("Enter the element : ");
    scanf("%d", &x);
    // logic
    int notfound = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > x)
                {
                    printf("Next largest element is %d\n", a[j]);
                    notfound = 0;
                    break;
                }
            }
            if(notfound == 1)
            {
                printf("Next element is not there -1");
                notfound =0 ;
            }
        }
    }
    if (notfound==1)
    {
        printf("Element not found inside the array .\n");
    }

    return 0;
}