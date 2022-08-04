// Palindrome 
#include<stdio.h>
int main()
{
    char name[30];
    int i , len=0 ,flag ;
    printf("Enter the charcter to find it is palindrome or not : ");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    len++;
    // printf("%d length\n",len );
    for(i=0;i<len;i++)
    {
        if(name[i]==name[len-1-i])
        flag = 1 ;
        else 
        {
            flag =0 ;
            break;
        }
    }
    if(flag)
    printf("The entered string is palindrome\n");
    else
    printf("The entered string is not palindrome\n");

    return 0 ;
}