// 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cout<<"Enter the number of subjects : ";
    cin>>n;
    pair<int,int> p[n];
    int counter = 1 ;
    for(int i = 0 ;i<n ;i++)
    {
        cout<<"Enter the marks of the subject "<<(i+1)<<" : ";
        int a ; cin>>a;
        p[i].first = counter++;
        p[i].second = a;
    }
    cout<<"Student marks details:"<<endl;
    cout<<"Subject     marks "<<endl;
    for(int i = 0 ;i<n ;i++)
    {
        cout<<p[i].first<<"             "<<p[i].second<<endl;
    }
  
    return 0 ;
}