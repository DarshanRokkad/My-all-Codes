//
#include <iostream>
using namespace std;
int main()
{
    string na;
    int a;
    cout << "a : ";
    cin >> a;
    cout<<"name : ";
    getline(cin, na);
    getline(cin, na);
    cout << "String is " << na;

    return 0;
}