// Building a basic guessing game in c++
// tells number of chance left 
// guess limit is 3 
// if guessed tell user in how many attempts they have guessed 
#include<iostream>
using namespace std;
int main()
{
    int secret = 7 ;
    int guess ,i ,flag = 0 ;
    int count =0;
    for(i=3;i>0;i--)
    {
        cout<<"\nyou have "<<i<<" chance to guess a number "<<endl;
        cout<<"Guess the number : ";
        cin>>guess;
        count ++;
        if(guess==secret)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    cout<<"\nYou won! you guessed the number in "<<count<<" attempts"<<endl;
    else 
    cout<<"\nYou lost ! you have not guessed the number "<<endl;

    return 0 ;
}