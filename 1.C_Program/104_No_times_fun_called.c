// Number of times function is called 
#include<stdio.h>
int fun();
int main()
{
    int call;
    call = fun ();
    printf("The funtion is called %d times \n",call);
    call = fun();
    printf("The funtion is called %d times \n",call);

    return 0;
}
int fun ()
{
    static int count =0 ;
    return ++count ;
}

// Number of times function is called using pointer
// #include<stdio.h>
// int fun(int *);
// int main()
// {
//     int count =0 ;
//     fun(&count);
//     printf("Function is called %d times \n",count );
//     fun(&count);
//     printf("Function is called %d times \n",count );

//     return 0 ;
// }
// int fun(int *count)
// {
//     ++*count;
// }