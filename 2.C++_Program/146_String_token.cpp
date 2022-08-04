// String token
#include<iostream>
#include<cstring> 
using namespace std; 
int main() 
{ 
    char s[20]="x=10;y=20;z=30";
    // cout<<strtok(s,"=;")<<endl;  // gives only one string 

    cout<<endl;
    char *tok = strtok(s,"?"); // it will not tokenize because delemeter given is not present in the string 
    while(tok!=NULL)
    {
        cout<<tok<<endl;
        tok = strtok(NULL,"?");
    }cout<<endl;

    char *token = strtok(s,"=;");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,"=;");
    }cout<<endl;    
  
    return 0 ;
}