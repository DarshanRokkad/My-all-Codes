// lower triangle matrix => row major matrix
#include <iostream>
using namespace std;
class Upper_tri
{
private:
    int n;
    int *a;

public:
    Upper_tri(int n)
    {
        this->n = n;
        a = new int[n * (n + 1) / 2];
    }

    void set(int row, int col, int x)
    {
        if (row >= col)
        {
            a[(row * (row - 1) / 2) + (col - 1)] = x;
        }
    }

    int get(int row, int col)
    {
        if (row >= col)
        {
            return a[(row * (row - 1) / 2) + (col - 1)];
        }
        else
        {
            return 0;
        }
    }

    friend ostream &operator<<(ostream &o, Upper_tri &m);
    friend istream &operator>>(istream &o, Upper_tri &m);

    ~Upper_tri()
    {
        delete[] a;
    }
};

ostream &operator<<(ostream &o, Upper_tri &m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i <= j)
            {
                o << m.a[(i* (i - 1) / 2) + (j - 1)]  << ' ';
            }
            else
            {
                o << 0 << " ";
            }
        }
        cout << endl;
    }
    return o;
}

istream &operator>>(istream &o, Upper_tri &m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            int x ;
            cin>>x ;
            m.set(i,j,x);
        }
        cout << endl;
    }
    return o;
}

int main()
{
    Upper_tri d(4);
    cin>>d;

    cout << d;

    return 0;
}