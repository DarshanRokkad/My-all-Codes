// Compare two strings without using strcmp
#include<stdio.h>
int main()
{
    int name1[20],name2[20];
    printf("Enter the name 1 : ");
    gets(name1);
    printf("Enter the name 2 : ");
    gets(name2);
    int i =0 , len1 =0 , len2 =0 , flag=1 ;
    // finding the length of the strings
    while(name1[i]!='\0')
    {
        len1 ++;
        i++;
    }
    i=0;
    while(name2[i]!='\0')
    {
        len2 ++;
        i++;
    }
    // check the condition to compare the strings 
    if(len1==len2)
    {
        for(int i=0;i<len1;i++)
        {
            if(name1[i]!=name2[i])
            {
                flag = 0;
            }
        }
    }
    else 
    {
        flag = 0;
    }
    // printing the result
    if (flag)
    {
        printf("Two strings are same\n");
    }
    else 
    {
        printf("Two strings are not same\n");
    }

    return 0;
}