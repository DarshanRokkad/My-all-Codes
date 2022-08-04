// Read an array and calculate the sum of the elements of the array 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n , sum =0 ;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0;i<n ;i++)
    {
        cin>>a[i];
    }
    for(int x : a )
    {
        sum = sum + x;
    }
    cout<<"The of elements of the array : "<<sum<<endl;
  
    return 0 ;
}