// To find the distance travelled
#include<iostream>
using namespace std;
int main()
{
    int u ,v ,a ;
    float speed ;
    cout<<"Enter 3 numbers : ";
    cin>>u>>v>>a;
    speed = (v*v-u*u)/(a*2);
    cout<<"Distance travelled between "<<speed<<endl;

    return 0 ;
}