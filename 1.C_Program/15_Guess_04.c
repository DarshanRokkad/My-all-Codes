#include<stdio.h>
int main()
{
    int a = 18 , b =9 , c ,d , e= 10;
    c = b ++ ; // c = 9 and b = 10
    d = b ; // d = 10
    printf("%d\n",a<b<c>d); // L -> R
    printf("%d\n",b==e); // 10==10
    printf("%d\n",c+1>e); // 9+1>10
    printf("%d\n",a+c==b>e<c+d); // 1.a+b and c+d -> 2. 27==(9>10<19) [l->r] -> 3. 27==1

    return 0 ;
}