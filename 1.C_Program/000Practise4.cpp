#include <iostream> // header file includes every Standard library
using namespace std;

int dig_sum(int n)
{
    int sum =0 ;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int logic(int n)
{
    int count=0;
    for(int i=1 ; i<=n ;i++)
    {
        int a = dig_sum(i);
        if(a*i==n)
        {
            count++;
        }
    }
    return count;
}

int main() {

	// Your code here
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        int ans = logic(a[j]);
        cout<<ans<<endl;
    }

    return 0;
}
