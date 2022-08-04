// to convert number into words
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n , r , rev=0 ;
    cout<<"Enter the number to convert it into words: ";
    cin>>n;
    // if number is 256 then it while take from 6 then 5 and then 2 
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev = rev*10+r;
    }
    // after reverse the number become 652 so number while take from 2 5 6 
    while(rev>0)
    {
        r=rev%10;
        rev=rev/10;
        switch(r)
        {
            case 0 : 
            cout<<"Zero ";
            break;
            case 1 : 
            cout<<"One ";
            break;
            case 2 : 
            cout<<"Two ";
            break;
            case 3 : 
            cout<<"Three ";
            break;
            case 4 : 
            cout<<"Four ";
            break;
            case 5 : 
            cout<<"Five ";
            break;
            case 6 : 
            cout<<"Six ";
            break;
            case 7 : 
            cout<<"Seven ";
            break;
            case 8 : 
            cout<<"Eight ";
            break;
            case 9 : 
            cout<<"Nine ";
            break;
        }
    }
  
    return 0 ;
}