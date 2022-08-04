// Right circular shift of three integers and printing in main
#include<stdio.h>
void shift(int* , int* , int*);
int main()
{
    int x, y, z;
    x = 5 ,y =8 ,z = 10;
    printf("values before shift  x =%d ,y=%d and z = %d\n", x, y, z);
    shift(&x,&y,&z);
    printf("values after shift  x =%d ,y=%d and z = %d\n", x, y, z);

    return 0 ;
}
void shift(int *x,int *y , int *z)
{
    int *tem ,i;
    tem = z;
    i = *tem;
    *z = *y;
    *y = *x ;
    *x = i;     
}

// Right circular shift of three integers and printing in fun 
// #include<stdio.h>
// void shift(int , int , int);
// int main()
// {
//     int x, y, z;
//     x = 5 ,y =8 ,z = 10;
//     printf("values before shift  x =%d ,y=%d and z = %d\n", x, y, z);
//     shift(x,y,z);

//     return 0 ;
// }
// void shift(int x,int y , int z)
// {
//     int tem ;
//     tem = z;
//     z = y;
//     y = x ;
//     x = tem;    
//     printf("values after shift  x =%d ,y=%d and z = %d\n", x, y, z);
// }