// finding the factorial of a number using do while loop 
// concept to recusion using do while loop
// 0!=1 ,1!=1 ,2!=2, 3!=6 .....
#include<iostream>
using namespace std;
int main()
{
    int num , f=1 ,i=1 ;
    cout<<"Enter the number you need factorial : ";
    cin>>num;
    do
    {
        f=f*i;
        // in first i=1 next i=2 next i = 3 and so on until i = num 
        i++;
    } while (i<=num); //loop will run i upto the number you need factorial
    cout<<num<<"! = "<<f<<endl;    

    return 0 ;
}