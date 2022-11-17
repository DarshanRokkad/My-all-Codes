// STL
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 33, 2, 45, 5};
    v.push_back(45);
    v.push_back(89);
    v.pop_back();
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}