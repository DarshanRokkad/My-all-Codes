// Bitwise operator = & , | ,~ ,^ ,>>,<<
#include<stdio.h>
int main()
{
    // a = 8 = 1000 and b = 9 = 1001 
    int a = 8  ,b =9  , c;    
    // a = 1000 &
    // b = 1001
    //ans= 1000
    printf("%d & %d is %d\n",a , b , a&b);
    // a = 1000 |
    // b = 1001
    //ans= 1001
    printf("%d | %d is %d\n",a , b , a|b);
    // a = 1000 ^
    // b = 1001
    //ans= 0001
    printf("%d ^ %d is %d\n",a , b , a^b);  
    // a = 1000 >> 2
    //ans= 0010  
    c = a >> 2;
    printf("%d >> 2 is %d\n",a ,c);
    // a = 1000 << 2
    //     32 16 8 4 2 1  
    //ans= 1  0  0 0 0 0 
    c = a << 2;
    printf("%d >> 2 is %d\n",a ,c);
    // it should be ~8 = 7
    // but in system it will give you negative number
    c = ~a;
    printf("~%d is %d\n",a , c);

    return 0 ;
}