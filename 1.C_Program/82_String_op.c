// String oprations in c 
// string length = strlen , string cancatination = strcat 
// string compare = strcmp , string reverse = strrev 
// string lower = strlwr , string upper = string upper 
#include<stdio.h>
#include<string.h> // to perform the operations on the string 
int main()
{
    char name[20] , sur[20];
    // Give input = Darshan Rokkad 
    printf("Enter your name : ");
    gets(name);
    printf("Enter your other name : ");
    gets(sur);

    // use of strlen = to find the length of the string 
    int len1 = strlen(name);
    int len2 = strlen(sur);
    printf("\nstrlen : \nLength of %s is %d and %s is %d \n",name , len1 ,sur , len2 );

    // use of strcat = to add/cancatinate two strings 
    strcat(name , sur );
    printf("\nstrcat : \nNow full name is %s\n",name);

    // use of strcmp = to compare two strings 
    int result = strcmp(name,sur);
    if(result==1)
    {
        printf("\nstrcmp : \nThe strings are equal\n");
    }
    else{
        printf("\nstrcmp : \nThe strings are not equal\n");
    }

    // use of strrev = to reverse a string 
    strrev(sur);
    printf("\nstrrev : \nThe reverse of the surname is %s\n",sur);

    // use of strlwr = to convert the whole string into lower case
    strlwr(name);
    printf("\nstrlwr : \nname = %s\n",name);

    // use of strupr = to convert the whole string into upper case
    strupr(name);
    printf("\nstrupr : \nname = %s\n",name);
    
    return 0;
}