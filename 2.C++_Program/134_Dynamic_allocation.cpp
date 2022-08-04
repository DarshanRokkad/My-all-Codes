// Dynamic memory allocation from heap 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int size ;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int *p = new int[size];
    cout<<"Enter the elements of the array : ";
    for(int i =0 ;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"The elements of the array is : ";
    for(int i =0 ;i<size;i++)
    {
        cout<<p[i]<<" ";
    }cout<<endl;
    cout<<endl;
    delete []p; // it is better to delete and use it again for new size
    // if want to change the size do this below 
    cout<<"Enter the size of the array : ";
    cin>>size;
    p = new int[size]; // it will not contian the old elements in it even if delete is not used 
    cout<<"Enter the elements of the array : ";
    for(int i =0 ;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"The elements of the array is : ";
    for(int i =0 ;i<size;i++)
    {
        cout<<p[i]<<" ";
    }cout<<endl;
    delete []p; //memory should be freed because accessed from otherwise mrmory will be leaked
  
    return 0 ;
}