#include<iostream>
#include <string>
using namespace std;
bool patternFound;  

class MyClass {

    private: 
    string str;
    string replace;
    string replaceWith;

    public:

    void getStrings() {

        cout<<"Enter the string : ";
        cin>> str;
    }

    void getReplaceStrings() {
        cout<<"Enter the pattern string : ";
        cin>>replace;

        cout<<"Enter the string to be replaced with: " ;
        cin>>replaceWith;
    }

    string ptrreplace(int start)
    {
        string temp , ans;
        for(int i = start+replace.length();str[i]!='\0';i++)
        {
            temp+=str[i];
        }
        replaceWith+=temp;
        for(int i = 0 ; i<start;i++)
        {
            ans+=str[i];
        }
        ans+=replaceWith;
        return ans ;
    }

    string patternReplace() {

         // loop to traverse through the string: 
        for(int i = 0; i<str.length(); i++) {

            string temp = "";

            // created a check to prevent the index out of bound
            if(i > str.length() - replace.length()) {
                break;
            }

            // inner loop to find the pattern in the string: 
            for(int j = i; j< replace.length() + i; j++) {
                temp = temp + str[j];            
            }
            // checks the pattern matching: 
            if(temp == replace) {

                patternFound = true;
                str = ptrreplace(i);
            } 
  
        }
        return str;
    }
};

int main() {

    MyClass c1;

    c1.getStrings();
    c1.getReplaceStrings();

    string result = c1.patternReplace();

    if(patternFound) {

        cout<<"Edited string is:  " <<result<<endl;

    } else {

        cout<<"No such string is found."<<endl;
    }
    return 0;
}