// Use of count stl in cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number elements of the array : ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int co = count(a, a + n, a[0]);
    cout << "The number of occurence of " << a[0] << " in the array is " << co << endl;

    return 0;
}