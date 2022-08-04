// Update an array using a funtion
#include<iostream> 
using namespace std; 
void update(int a[],int n )
{
    cout<<"Inside main funtion"<<endl;
    a[0]=120;
    for(int i =0 ;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl<<endl;
}
int main() 
{ 
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<"Inside main funtion"<<endl;
    for(int i =0 ;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
  
    return 0 ;
}