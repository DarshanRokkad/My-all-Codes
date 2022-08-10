// find the sum of the array 
#include<iostream> 
using namespace std; 
int getSum(int a[],int n)
{
    int sum = 0 ;
    for(int i =0 ;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum ;
}
float getAve (int sum , int n )
{
    float ave = (float)sum / n ;
    return ave;
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
    int sum = getSum(a,n);
    float ave = getAve(sum,n);
    cout<<"The sum of the array elements is "<<sum<<endl;
    cout<<"The average of the array elements is "<<ave<<endl;
  
    return 0 ;
}