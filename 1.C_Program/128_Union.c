// using of union
#include<stdio.h>
typedef union abc 
{
    char gpa ;
    int age ;
    float per;
}abc;
int main()
{
    abc u ;
    u.age = 8 ;
    u.gpa ='y';
    u.per = 9.8;
    // it will take all values and print garbage value expect the last input data type to the union 
    printf("age : %d\n",u.age);
    printf("Gpa : %c\n",u.gpa);
    printf("Percentage : %f\n",u.per);
    // the size will be decided by the maximum member size in the union 
    // in the case the lagre size in the union is the int and float as they take 4 bytes 
    printf("The size of the union is %d \n",sizeof(u));

    return 0 ;
}