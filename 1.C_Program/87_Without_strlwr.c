// converting the string into lower
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the name : ");
    gets(name);
    int i =0 , len =0 ;
    while(name[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=0;i<len;i++)
    {
        if(name[i]<='Z'&&name[i]>='A')
        {
            name[i]=name[i]+32;
        }
    }
    printf("Name = %s\n",name);

    return 0 ;
}