#include <iostream>
using namespace std;

class triangle
{
private:
    int len;
    int bre;
    int hei;

public:
    triangle(int l = 0, int b = 0, int h = 0)
    {
        len = l;
        bre = b;
        hei = h;
    }
    void display()
    {
        cout << "length : " << len << endl;
        cout << "Breadth : " << bre << endl;
        cout << "Height : " << hei << endl;
    }
    bool operator==(triangle t)
    {
        if ((this->len == t.len) && (this->bre == t.bre) && (this->hei == t.hei))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int l, b, h;
    cout << "Enter the value of length , breadth and height of triangle 1 : ";
    cin >> l >> b >> h;
    triangle t1(l, b, h);
    cout << "Enter the value of length , breadth and height of triangle 2 : ";
    cin >> l >> b >> h;
    triangle t2(l, b, h);
    cout<<"Comparing 2 triangles."<<endl;
    if(t1==t2)
    {
        cout<<"2 triangles are equal."<<endl;
    }
    else
    {
        cout<<"2 triangles are not equal."<<endl;
    }

    return 0;
}