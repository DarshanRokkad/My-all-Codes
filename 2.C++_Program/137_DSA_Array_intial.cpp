// Intialize an array with a single number and print it 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n , num ;
    cout<<"Number of elements of the array : ";
    cin>>n;
    cout<<"Enter the number you need to store in the array : ";
    cin>>num;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        a[i]=num;
    }
    for(int j = 0 ; j<n ;j++)
    {
        cout<<a[j]<<" ";
    }
  
    return 0 ;
}