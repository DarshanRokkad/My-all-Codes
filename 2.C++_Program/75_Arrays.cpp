// Arrays in cpp
#include<iostream> 
using namespace std; 
int main() 
{ 
    // all same as that of c but for loop for printing can be done in different type 
    int n;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array : ";
    // This is the type of looping condition in array
    // Runs based on the array size not with respect to array elements  
    for(int x : arr)
    {
        cout<<x<<" ";
    }cout<<'\n';
    // you can display the array in the above but if you donot know the data type if the array use auto 
    char a[]={'A',66,'C',68};
    for(auto c : a)
    {
        cout<<c<<" ";
    }cout<<'\n';
    for(char c : a)
    {
        cout<<c<<" ";
    }cout<<'\n';
    for(int y : a )
    {
        cout<<y<<" ";
    }
  
    return 0 ;
}