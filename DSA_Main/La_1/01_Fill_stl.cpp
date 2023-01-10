// fill stl in cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number elements of the array : ";
    cin >> n;
    int a[n] = {0};
    cout << "All values of array is 0 now." << endl;
    cout << "Intial value of the array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int value;
    cout << "Enter the value to be filled : ";
    cin >> value;
    fill(a, a + n, value);
    cout << "Final value of the array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}