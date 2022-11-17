#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return ( a + b);
}
// float sum(int a, int b , int c )
// {
//     return ( a + b);
// }
int sum(int a, int b, int c)
{
    return (a + b + c);
}
float sum(float a, float b)
{
    return a + b;
}
int main()
{
    cout << sum(5, 3) << endl;
    cout << sum(5, 3, 2) << endl;
    cout << sum(5.3f, 6.3f) << endl;
    // it is compulsary to put f to make compiler know that it is data of type float

    return 0;
}