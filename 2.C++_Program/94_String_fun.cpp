// Some more string function in c++
#include<iostream> 
#include<cstring>
using namespace std; 
int main() 
{ 
    char s1[] = "Programming";
    cout<<strchr(s1,'r')<<endl; // print a character from that character from left 
    cout<<strrchr(s1,'r')<<endl<<endl; // print a character from that character from right most cahracter

    char f[]="Hello";
    char m[]="hello";
    char l[]="Ann mam";
    cout<<strcmp(f,m)<<endl;  // give negative if the first string is smaller
    cout<<strcmp(f,l)<<endl;  // give positive if the first string is bigger 
    cout<<strcmp(f,f)<<endl<<endl;  // give 0 if two string are equal

    // convert string to long int or to float 
    char str1[]="237";
    cout<<(long int)(strtol(str1,NULL,10)-10)<<endl;
    long int x  = strtol(str1,NULL,10);

    char str2[]="297.63";
    float y = strtof(str2,NULL);
    
    cout<<x+10<<endl;
    cout<<y+1<<endl<<endl;
  
    return 0 ;
}