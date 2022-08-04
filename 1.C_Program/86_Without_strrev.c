// Reversing the strings without using the strrev function
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the name: ");
    gets(name);
    int i = 0 , len =0 , tem ;
    while(name[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=0;i<=len/2;i++)
    {
        tem = name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=tem ;
    } 
    printf("String after reversing is : %s\n",name);

    return 0;
}