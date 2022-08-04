// finding nth element of the fibannaic series using function
#include<iostream> 
using namespace std; 
int fib (int n )
{
    int ans =0 ;
    int fir = 0 ,sec = 1 ;
    if(n==1)
    {
        return 0 ;
    }
    else if(n==2)
    {
        return 1 ;
    }
    else 
    {        
        for(int i =1 ;i<=(n-2);i++)
        {
            ans = fir + sec ;
            fir = sec ;
            sec = ans ;
        }
        return ans ;
    }
}
int main() 
{ 
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;
    int ans = fib(n);
    cout<<n<<" th element of fibannic series is "<<ans<<endl;
  
    return 0 ;
}