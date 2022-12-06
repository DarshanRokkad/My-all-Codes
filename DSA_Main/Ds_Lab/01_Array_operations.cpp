// Performing the array operations in c++ using class and objects
#include <iostream>
#include <vector>
using namespace std;
class ArrayOperation
{
private:
    vector<int> v;

public:
    ArrayOperation()
    {
        while (1)
        {
            int choice = menu();
            switch (choice)
            {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insertele();
                break;
            case 4:
                deleteele();
                break;
            case 5:
                exit(0);
            }
        }
    }
    int menu()
    {
        cout << endl;
        cout << "***** Array operations *****" << endl;
        cout << "1. Create the array ." << endl;
        cout << "2. Display the array . " << endl;
        cout << "3. Insert the element of the array ." << endl;
        cout << "4. Delete the element from an array ." << endl;
        cout << "5. <<< Exit >>>" << endl;
        int choice;
        cout << endl;
        cout << "Enter the choice : ";
        cin >> choice;
        cout << endl;
        return choice;
    }
    void create()
    {
        int n;
        cout << "Enter the number elements in the array : ";
        cin >> n;
        cout << "Enter the elements of the array : ";
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }
        display();
    }

    void display()
    {
        if (v.size() != 0)
        {
            cout << "Array : ";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Array is empty" << endl;
        }
    }

    void insertele()
    {
        if (v.size() != 0)
        {
            int pos;
            cout << "Enter the position you need to insert an element : ";
            cin >> pos;
            if (pos >= 0 && pos <= v.size())
            {
                int ele;
                cout << "Enter the element you need to insert : ";
                cin >> ele;
                v.insert(v.begin() + pos, ele);
                display();
            }
            else
            {
                cout << "The index is out of range " << endl;
            }
        }
        else
        {
            cout << "Array is not present please create the array." << endl;
        }
    }

    void deleteele()
    {
        if (v.size() != 0)
        {
            int pos;
            cout << "Enter the position you need to delete an element : ";
            cin >> pos;
            if (pos >= 0 && pos < v.size())
            {
                vector<int>::iterator it = v.begin() + pos;
                v.erase(it);
                display();
            }
            else
            {
                cout << "The index is out of range " << endl;
            }
        }
        else
        {
            cout << "Array is not present please create the array." << endl;
        }
    }
};

int main()
{
    ArrayOperation a;

    return 0;
}