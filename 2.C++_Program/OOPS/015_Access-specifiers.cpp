// knowning public , protected and private
#include <iostream>
using namespace std;
class rectangle
{
private:
    int len;
    int bre;

public:
    void setlen(int l )
    {
        if(l>0)
        {
            len= l;
        }
        else
        {
            len = 1;
        }
    }
    void setbre(int b )
    {
        if(b>0)
        {  
            bre= b;
        }
        else
        {
            bre =1;
        }
    }
    int getlen()
    {
        return len;
    }
    int getbre()
    {
        return bre;
    }
    int area()
    {
        return (len * bre);
    }
};
int main()
{
    rectangle r;
    r.setlen(5);
    r.setbre(-3);
    cout<<r.getlen()<<endl;
    cout<<r.area()<<endl;

    return 0;
}