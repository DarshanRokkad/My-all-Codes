// Implementing binary search using class and objects
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;
class Binary
{
private:
    vector<int> v;
    int data;

public:
    Binary()
    {
        int n;
        cout << "Enter number elements of the array : ";
        cin >> n;
        cout << "Enter the elements of the array  in sorted order : ";
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }
        cout << "Enter the data to be searched : ";
        cin >> data;

        int result = Bsearch(0, v.size() - 1);
        if (result < 0)
        {
            cout << data << " is not found in array " << endl;
        }
        else
        {
            cout << data << " is present at " << result + 1 << " position" << endl;
        }
    }

    int Bsearch(int l, int h)
    {
        if (l <= h)
        {
            int mid = (l + h) / 2;
            if (v[mid] == data)
            {
                return mid;
            }
            else if (data < v[mid])
            {
                return Bsearch(l, mid - 1);
            }
            else
            {
                return Bsearch(mid + 1, h);
            }
        }
        return -1;
    }
};

int main()
{
    Binary b;

    return 0;
}