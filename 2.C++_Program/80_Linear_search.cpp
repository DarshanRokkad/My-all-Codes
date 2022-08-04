// Linear search 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cout<<"Enter number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    int data;
    cout<<"Enter the data to be searched : ";
    cin>>data;
    for(int i =0 ;i<n;i++)
    {
        if(a[i]==data)
        {
            cout<<"The data is found at "<<i<<"th index "<<endl;
            exit(0);
        }
    }
    cout<<"The data is not found in the array"<<endl;
  
    return 0 ;
}