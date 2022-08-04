// Logical oprator = && , || , !
#include<stdio.h>
int main()
{
    int a = 3 , b =3 , c = 8  ,re ;
    // and oprator
    re = (a==b) && (c<a);
    printf("(%d==%d) && (%d<%d) is %d \n",a ,b , c,a,re);
    re = (a==b) && (c>a);
    printf("(%d==%d) && (%d>%d) is %d \n",a ,b , c,a,re);
    // or oprator = if first condition is true then it will not check second condition
    re = (a!=b) || ++a;
    printf("a=%d\n",a);
    printf("(%d!=%d) || ++%d is %d \n",3 ,b ,a,re);
    re = (a==5) || ++a;
    printf("a=%d\n",a);
    printf("(%d==%d) || ++%d is %d \n",a ,5,a,re);
    printf("a=%d\n",a);
    // not 
    printf("!(%d==%d) is %d \n",a ,b , !(a==b));
    printf("!(%d!=%d) is %d \n",a ,b , !(a!=b));

    return 0 ;
}