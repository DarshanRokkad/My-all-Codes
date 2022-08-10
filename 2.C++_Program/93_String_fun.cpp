// String function
#include<iostream> 
#include<cstring>
using namespace std; 
int main() 
{ 
    char s[19] = "Steve job";
    char l[10] = " jobs";
    char copy[10] ;

    if(strstr(s,l))
    {
        cout<<strstr(s,l)<<endl<<endl; // it will print the substring which is present in the main string 
    }
    else 
    {
        cout<<"Not found "<<endl<<endl; // giving wrong output
    } 

    cout<<"Length of "<<s<<" is "<<strlen(s)<<endl<<endl;

    cout<<"String cancatination : "<<strcat(s,l)<<endl;
    cout<<"String n cancatination : "<<strncat(s,l,3)<<endl<<endl;

    cout<<"Copy : "<<strcpy(copy,l)<<endl;
    cout<<"Copy n : "<<strncpy(copy,s,2)<<endl<<endl; // for present string it wil copy other string and add from starting position 

    return 0 ;
}