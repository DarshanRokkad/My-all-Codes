#include <iostream>
using namespace std;

template <class A, class B>
auto findMin(A a, B b) -> decltype(a < b ? a : b)
{
    return (a < b ? a : b);
}

int main()
{
    // float a = 123 ;
    // decltype(a) b = 342;
    // cout<<typeid(a).name()<<endl;
    // cout<<typeid(b).name()<<endl;

    auto c = findMin<int, float>(2, 3.12);
    auto d = findMin<int, float>(5, 4.15);
    cout << typeid(c).name() << " " << c << endl;
    cout << typeid(d).name() << " " << d << endl;

    return 0;
}