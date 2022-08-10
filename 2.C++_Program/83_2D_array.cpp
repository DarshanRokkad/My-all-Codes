// 2 D array 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int row , col;
    cout<<"Enter number of row of the matrix : ";
    cin>>row ;
    cout<<"Enter number of column of the matrix : ";
    cin>>col;
    int a[row][col];
    cout<<"Enter the elements of the 2 D array : \n";
    for(int i =0  ;i<row ;i++)
    {
        for(int j =0 ;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    // Accessing method 1 
    cout<<"The elements of the array : \n";
    for(int i =0  ;i<row ;i++)
    {
        for(int j =0 ;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }  
    cout<<endl;
    // Accessing method 2 
    cout<<"The elements of the array : \n";
    for(auto &x : a)
    {
        for(auto &y : x)
        {
            cout<<y<<" ";
        }cout<<endl;
    }  
  
    return 0 ;
}