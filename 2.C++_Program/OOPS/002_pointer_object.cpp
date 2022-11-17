// pointer object to allocate in heap
#include <iostream>
using namespace std;
class rectangle
{
public:
    // data members
    int len;
    int bre;
    // member function
    int area()
    {
        return (len * bre);
    }
    int perimeter()
    {
        return 2 * (len * bre);
    }
};
int main()
{
    rectangle *p = new rectangle;
    // memory is allocated in heap
    p->len = 85;
    p->bre = 3;
    cout << "Area of the rectangle 1 using pointers : " << p->area() << endl;
    free(p);

    return 0;
}