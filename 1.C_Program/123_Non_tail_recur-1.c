// Non tail recursion and it is also direct 
#include<stdio.h>
void count (int );
int main()
{
    count(3);

    return 0;
}
void count (int n )
{
    static int d =1 ;
    printf("n = %d\n",n);
    printf("d = %d\n",d);
    d++;
    if(n>1)
    {
        count(n-1);
    }
    printf("d = %d\n",d);
}