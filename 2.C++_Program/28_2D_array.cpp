// 2D  array in c++
// and using the concept of nested for loop 
// taking input and accesing them 
#include<iostream>
using namespace std;
int main()
{
    int row , col ;
    // int num[2][3] = {{4,5,3},{8,9,2}};
    cout<<"Enter the number of row and column in 2D array : ";
    cin>>row>>col;
    int grid[row][col];
    // taking input from user 
    cout<<"Enter the elements of the 2D arary : \n";
    for(int i=0 ;i<row ;i++)
    {
        for(int j=0 ;j<col;j++)
        {
            cin>>grid[i][j];
        }
    }
    // Displaying elements of the 2 D array using nested for loops 
    cout<<"The elements  of the 2D array is : \n";
    for(int i=0 ;i<row ;i++)
    {
        for(int j=0 ;j<col;j++)
        {
            cout<<grid[i][j]<<" ";
        }cout<<endl;
    }

    return 0 ;
} 