// Finding the largest element of the array 
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
    int lar = a[0];
    for(auto x:a)
    {
        if(x>=lar)
        {
            lar = x;
        }
    }
    cout<<"The largest element of the array is : "<<lar<<endl;
  
    return 0 ;
}