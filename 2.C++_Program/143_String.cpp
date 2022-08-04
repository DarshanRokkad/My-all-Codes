// Strings in cpp
#include<iostream> 
using namespace std; 
int main() 
{ 
    char name[]="darshan rokkad";
    char alpha[5]={65,66,67,68,'E'};
    char newe[]={66,67,65,69,0,90,89}; // it will not display z and y 
    char namexp[]={'s','t','e','v','e','\0','j','o','b'}; // it will not display anything after the null character 
    
    cout<<name<<endl;
    cout<<alpha<<endl;
    cout<<newe<<endl;
    cout<<namexp<<endl;
    
    char *s = "hello"; // it will give warning 
    cout<<s<<endl;
    cout<<endl;

    char in[50];
    cout<<"Enter the name : ";
    cin.getline(in,50);
    cout<<in<<endl<<endl;

    cout<<"Enter the name : ";
    cin>>in; // it only take upto first space 
    cout<<in<<endl<<endl;
  
    return 0 ;
}