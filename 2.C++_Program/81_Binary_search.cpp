// binary search 
// prerequestie is that the array to be sorted 
#include<iostream> 
using namespace std; 
int bsearch(int a[],int l, int r , int data )
{
    if(l<=r)
    {
        int mid = (l+r)/2;
        if(data<a[mid])
        {
            return bsearch(a,l,mid-1,data);
        }
        else if(data>a[mid])
        {
            return bsearch(a,mid+1,r,data);
        }
        else // this else is not required 
        {
            return mid ;
        }
    }
    return -1 ;
}
int main() 
{ 
    int n ;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array in the increasing order : ";
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int data ;
    cout<<"Enter the data to be searched : ";
    cin>>data;
    int result = bsearch(a,0,n-1,data);
    if(result<0)
    {
        cout<<"Element not found!"<<endl;
    }
    else
    {
        cout<<"The element is found at "<<result+1<<" position"<<endl;
    }
  
    return 0 ;
}