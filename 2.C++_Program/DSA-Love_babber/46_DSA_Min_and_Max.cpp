// Finding the maximum and minmum of the array 
#include<iostream> 
using namespace std; 
int getMax(int a[],int n )
{
    int maxi = INT_MIN ;
    for(int i =0 ;i<n;i++)
    {
        maxi = max(maxi,a[i]);
    }
    return maxi;
}
int getmin(int a[],int n )
{
    int mini = INT_MAX ;
    for(int i =0 ;i<n;i++)
    {
        mini = min(mini,a[i]);
    }
    return mini;
}
int main() 
{ 
    int n ;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter number of elements of the array : ";
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    int max = getMax(a,n);
    int min = getmin(a,n);
    cout<<"The maximum element of the array : "<<max<<endl;
    cout<<"The minimum element of the array : "<<min<<endl;
  
    return 0 ;
}