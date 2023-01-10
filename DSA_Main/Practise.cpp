//
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of the numerator : ";
    cin >> a;
    cout << "Enter the value of the denominator : ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw("Zero division error.");
        }
        c = a/b;
        cout << "Division of " << a << " / " << b << " = " << c << endl;
    }
    catch (const char  *c)
    {
        cout << c << endl;
    }
    cout<<"Hello guys"<<endl;

    return 0;
}