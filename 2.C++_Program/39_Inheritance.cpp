// Inheritance in C++
#include<iostream>
using namespace std;
class chef
{
    public:
    void makechi(){
        cout<<"The chef makes yummy chicken"<<endl;
    }
    void makesal(){
        cout<<"The chef makes salad"<<endl;
    }
    void makespe(){
        cout<<"The chef makes special bbq ribs"<<endl;
    }
};
// for our purpose we need italianche class can do the what normal chef can do and other things also 
// so to build this italian chef we use inheritance because this italian chef can do what normal chef can do 
// here we can inherite the class chef into class italianchef 
class italianchef : public chef // now this give access to chef class
{
    public:
    void makepas(){
        cout<<"The italian chef also makes pasta"<<endl;
    }
    // over writing makespe funtion in class italianchef 
    // to make itchef to make it chef to make other special dish
    void makespe(){
        cout<<"The italian chef makes special momose"<<endl;
    }
};
int main()
{
    chef ch;
    ch.makechi();
    ch.makespe();
    // chef1.makepas(); //we cannot do so because chef class cant make pasta

    italianchef it; 
    it.makechi(); // even though the class italianchef is empty it will give output due having access to class chef
    it.makepas();
    // we can over write the function in class chef objects in class italianchef
    it.makespe();

    return 0 ;
}