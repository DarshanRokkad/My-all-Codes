// Assignment operator += , -= ,*= , /= , %=
#include<stdio.h>
int main()
{
    int a = 9 , b =3 ;
    a +=b;
    // a = 9 + 3 = 12
    printf("a+=b then a = %d\n" , a);
    a -=b;
    // a = 12 - 3 =9
    printf("a-=b then a = %d\n" , a);
    a *=b;
    // a = 9 * 3 =27
    printf("a*=b then a = %d\n" , a);
    a /=b;
    // a = 27 / 3 = 9
    printf("a/=b then a = %d\n" , a);
    a %=b;
    // a = 9 % 3 =0
    printf("a%%=b then a = %d\n" , a);

    return 0 ;
}