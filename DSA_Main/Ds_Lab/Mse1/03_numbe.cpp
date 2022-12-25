// Natural number
#include <iostream>
using namespace std;

class Natural
{
private:
    float n;

public:
    Natural(int n=0)
    {
        this->n = n ;
    }
    float Predecessor()
    {
        return (n - 1);
    }
    bool IsGreater(int a)
    {
        if (a > n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    float Multiply(int a)
    {
        return (n * a);
    }
    float Division(int a)
    {
        if (a == 0)
        {
            cout << "infinity " << endl;
            return 0;
        }
        else
        {
            return (n / a);
        }
    }
    bool IsZero()
    {
        if(n==0)
        {
            return true ;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    Natural num(n);
    cout<<"Predecessor of "<<n<<" : "<<num.Predecessor()<<endl;
    cout<<"Is 7 is greater than "<<n<<" : "<<num.IsGreater(7)<<endl;
    cout<<"Multiply 3 with "<<n<<" : "<<num.Multiply(3)<<endl;
    cout<<"Division of "<<n<<" by 4 : "<<num.Division(4)<<endl;
    cout<<"Is "<<n<<" is zero : "<<num.IsZero()<<endl;

    return 0;
}