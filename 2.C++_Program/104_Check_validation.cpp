// Program is not correct 
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    int i = 0 ,result = 0;
    while(name[i]!=0)
    {
        if(!(name[i]>=0&&name[i]<=9||name[i]<='z'&&name[i]>='a'||name[i]<='Z'&&name[i]>='A'))
        {
            result=1;
            break;
        }
        i++;    
    }
    if(result)
    {
        cout<<"Not Valid"<<endl;
    }
    else{
        cout<<"Valid"<<endl;
    }

    return 0 ;
}