// for each loop
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0;i<n ;i++)
    {
        cin>>a[i];
    }
    // This is called for each loop 
    for(auto x : a)
    {
        cout<<x<<" ";
    }
  
    return 0 ;
}