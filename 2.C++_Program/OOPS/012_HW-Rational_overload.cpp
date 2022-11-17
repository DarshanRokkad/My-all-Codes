// overloading operator in the rational number
#include<iostream> 
using namespace std; 
class rational
{
    private:
    int p ;
    int q ;
    public:
    rational(int p=0 , int q=1 )
    {
        setpq(p,q);
    }
    rational(rational &r)
    {
        setpq(r.p,r.q);
    }
    void setpq(int p , int q)
    {
        this->p = p;
        if(q==0)
        {
            cout<<"Denomintor cannot be zero!"<<endl;
            this->q = 1 ;
        }
        else{
            this->q = q;
        }
    }
    friend rational operator+(rational a , rational b);
    friend ostream &operator<<(ostream &out , rational &r);
};
rational operator+(rational a , rational b)
{
    rational temp ;
    temp.p = a.p * b.q + b.p * a.q;
    temp.q = a.q * b.q ;
    return temp;
}
ostream &operator<<(ostream &out , rational &r)
{
    out<<r.p<<" / "<<r.q;
    return out;
}
int main() 
{ 
    rational r(5,0) , s(7,8);
    rational t;
    t = r + s;
    cout<<r<<" + "<<s<<" = "<<t<<endl;    
  
    return 0 ;
}