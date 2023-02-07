//
#include <iostream>
using namespace std;

class CppArray
{
public:
    float *a;
    int size;

    // default value constructor
    CppArray(int size = 5, float intvalue = 0)
    {
        a = new float[size];
        this->size = size;
        for (int i = 0; i < size; i++)
        {
            a[i] = intvalue;
        }
    }

    // deep copy construtor
    CppArray(CppArray &c)
    {
        a = new float[c.size];
        size = c.size;
        for (int i = 0; i < c.size; i++)
        {
            a[i] = c.a[i];
        }
    }

    // overloading of = operator
    CppArray operator=(CppArray c)
    {
        CppArray temp;
        temp.size = c.size;
        for (int i = 0; i < c.size; i++)
        {
            temp.a[i] = c.a[i];
        }

        return temp;
    }

    int getSize()
    {
        return size;
    }

    float &operator[](int i)
    {
        if (i >= 0 && i < size)
        {
            return a[i];
        }
        else
        {
            throw "Index out of range";
        }
    }

    friend ostream &operator<<(ostream &os, CppArray &c);
    friend istream &operator>>(istream &is, CppArray &c);

    ~CppArray()
    {
        delete[] a;
    }
};

ostream &operator<<(ostream &os, CppArray &c)
{
    os << "Array : ";
    for (int i = 0; i < c.size; i++)
    {
        os << c.a[i] << " ";
    }
    return os;
}

istream &operator>>(istream &is, CppArray &c)
{
    cout << "Enter elements of the array : ";
    for (int i = 0; i < c.size; i++)
    {
        is >> c.a[i];
    }
    return is;
}

int main()
{
    CppArray obj1;
    CppArray b(obj1);
    CppArray c = obj1;
    cout << "Size of array a : " << obj1.getSize() << endl;
    cin >> obj1;
    cout << obj1;

    try
    {
        cout << "First : " << obj1[0] << endl;
    }
    catch (const char *s)
    {
        cout << s << endl;
    }

    try
    {
        cout << "Tenth : " << obj1[10] << endl;
    }
    catch (const char* s)
    {
        cout << s << endl;
    }

    return 0;
}