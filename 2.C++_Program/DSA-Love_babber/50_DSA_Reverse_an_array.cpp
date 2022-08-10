// Reverse an intetger array 
#include<iostream> 
using namespace std; 
void reverse(int a[],int n)
{
    int start = 0 ;
    int end = n-1;
    while(start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void displayArray(int a[],int n)
{
    for(int i =0 ;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main() 
{ 
    int n ;
    cout<<"Enter Number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    displayArray(a,n);
    reverse(a,n);
    displayArray(a,n);
  
    return 0 ;
}