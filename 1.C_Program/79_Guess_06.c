// printing the array elements and address in different type
// Guess the output of the program 
#include<stdio.h>
int main()
{
    int x[10]={10,11,12,13,14,15,16,17,18,19};
    int i =0 ;
    while(i<10)
    {
        printf("i = %d ,x[i] = %d ,*(x+i) = %d, ",i,x[i],*(x+i));
        printf("&x[i] = %d , x+i = %d\n",&x[i],x+i);
        i++;
    }

    return  0 ;
}