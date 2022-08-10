// Linear search in c++ from bhaiya
#include<iostream> 
using namespace std; 
bool found(int a[],int n,int key)
{
    for(int i =0;i<n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }
    return 0;
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
    int key ;
    cout<<"Enter the key to be searched : ";
    cin>>key;
    bool isfound = found(a,n,key);
    if(isfound)
    {
        cout<<"The key is found!"<<endl;
    }
    else 
    {
        cout<<"The key is not found!"<<endl;
    }
  
    return 0 ;
}