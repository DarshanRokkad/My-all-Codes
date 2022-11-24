// Jagged array in cpp 
#include<iostream>
using namespace std;
int main()
{
    // rows elements of jagged array 
    int row0[2] = {1,2};
    int row1[3] = {3,4,5} ;
    // creating jagged array and adding the rows into it
    int* jagged[2]={row0,row1};
    // storing number of rows in the size to interate the inner loop for different size of rows
    int size[2]={2,3}, k=0;

    for(int i = 0 ; i<2;i++)
    {
        int *ptr = jagged[i];
        for(int j = 0 ;j<size[k];j++)
        {
            cout<<*ptr<<" ";
            ptr++;
        }
        cout<<endl;
        k++;
    }

    return 0;
}