//
#include <iostream>
using namespace std;
int main()
{
    string na;
    string naa;
    int a;
    cout << "a : ";
    cin >> a;
    cout<<"name : ";
    getline(cin, na);
    getline(cin, na);
    cout<<"name : ";
    getline(cin, naa);
    cout << "String is " << na;
    cout << "String is " << naa;

    return 0;
}