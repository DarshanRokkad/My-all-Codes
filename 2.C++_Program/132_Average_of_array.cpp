// To find the average of the elements of the array 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n , sum = 0  ;
    cout<<"Enter the number elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    int ave = sum /n;
    cout<<"The average of elements of the array : "<<ave<<endl;
  
    return 0 ;
}