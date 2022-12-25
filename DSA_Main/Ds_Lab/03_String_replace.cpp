// String replacing problem
#include <iostream>
using namespace std;

class String
{
private:
    string str;
    string strrep;
    string strtorep;

public:
    String()
    {
        setstring();
        setswap();
        swapstring();
        cout << "Edited string : " << str;
    }
    void setstring()
    {
        cout << "Enter the string : ";
        cin >> str;
    }

    void setswap()
    {
        cout << "Enter the string replace : ";
        cin >> strrep;
        cout << "Enter the string to replace : ";
        cin >> strtorep;
    }

    void swapstring()
    {
        int ind_1, ind_2;
        string temp_1;
        string temp_2;
        for (ind_1 = 0; str[ind_1]; ind_1++)
        {
            temp_1 = str.substr(ind_1, strrep.length());
            if (temp_1 == strrep)
            {
                temp_2 = strtorep;
                for (ind_2 = 0; ind_2 < strrep.length(); ind_2++)
                {
                    str[ind_1 + ind_2] = temp_2[ind_2];
                }
            }
        }
        str[ind_1] = 0;
    }
};

int main()
{
    String s;

    return 0;
}