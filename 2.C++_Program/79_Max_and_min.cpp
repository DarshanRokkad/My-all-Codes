// Read an array and find max and min of the array
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
    int max = a[0], min = a[0];
    for(int i =0 ;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    cout<<"Maximum is "<<max<<endl;
    cout<<"Minimum is "<<min<<endl;
  
    return 0 ;
}