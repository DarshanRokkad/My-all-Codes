// Getters and setters 
// Here we are representing the movie as classes 
#include<iostream>
using namespace std;
class movie 
{
    private : 
    // Now it means the only code inside the  movie class gone access rating
    // if anything that we gone add under this private keyword it is gone be private 
    string rating ;
    public: 
    // if anything that we gone add under this public keyword it is gone be public  
    string title ;
    string director ;
    // Now we use construtor function here 
    movie(string ti , string di , string ra)
    {
        title = ti ;
        director = di ;
        // rating = ra ; // here rating can be accesed because construtor variable and private rating is under same movie class
        set_rating(ra);
    }
    void set_rating(string ra)
    {
        // so we can set the condition to check the input is valid or not 
        if (ra=="PG"||ra=="PG-13"||ra=="G"||ra=="NR")  //These are the valid rating 
        rating = ra;
        // if not valid rating 
        else
        rating = "NR";
    }
    string getrating()
    {
        // Here we are returning rating because we cant access rating due to present in private 
        // so we are return rating in public
        return rating ; 
    }
};
int main()
{
    movie m1("Avengers","Josh","PG-13");
    // m1.rating = "Dog"; // cant do so because now also it is under private 
    m1.set_rating("Dog"); // now that funtion is going to set the value 
    // for rating there can only be PG , PG-13 , G , NR 
    // but if user gives dog the contrutor funtion will take it but we have stop it 
    // Now when we add the condition and the input is invalid we are teeling that NR 
    // and we cant access rating because now also that rating is under private 
    cout<<m1.getrating(); // we cannot acceses rating because it is under private and it not under public 

    return 0 ;
}