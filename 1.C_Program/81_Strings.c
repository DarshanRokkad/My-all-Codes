// String in C 
#include<stdio.h>
int main()
{
    char name1[16] = "Darshan Rokkad"; // here automatically adds the null character 
    char name2[7] = {'A','m','o','g','h','a','\0'}; // here we have to add the null character 
    printf("Name 1 = %s\n",name1);
    printf("Name 2 = %s\n",&name2[2]); // it will print from the index 2
    // char name4[30];
    // printf("Enter your name : ");
    // scanf("%5s",&name4);
    // puts(name4);

    char name3[5]; // In c program we have the buffer overflow draw back 
    printf("Enter your name : ");
    gets(name3);
    printf("Name 3 = %s\n",name3);

    return 0 ;
}