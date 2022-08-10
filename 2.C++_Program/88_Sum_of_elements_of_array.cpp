// Sum of the elements of the array 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum = 0 ;
    for(auto x : a )
    {
        sum = sum +x ;
    }
    cout<<"The sum of elements of the array : "<<sum<<endl;
  
    return 0 ;
}