// Array declaration and accesing and printing array elements using loop
#include<iostream>
using namespace std;
int main()
{
    int i,n,in;
    // Taling number elements of array to declare array 
    cout<<"Enter number of elements of the array : ";
    cin>>n;
    // Taking array input from the user  
    int num[n];
    cout<<"Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin>>num[i];
    // printing the array elements 
    cout<<"Array numbers are : ";
    for(i=0;i<n;i++)
    cout<<num[i]<<" ";
    // Find element using index
    cout<<"\nEnter the index : ";
    cin>>in;

    cout<<"Number at "<<in<<"th position is : "<<num[in]<<endl;

    return 0 ;
}