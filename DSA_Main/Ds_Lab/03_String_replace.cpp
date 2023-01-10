// String replacing problem
/*
Design a Program in C++ for the following operations on Strings.
a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
b. Perform Pattern Matching Operation: Find and Replace all occurrences
of PAT in STR with REP if PAT exists in STR. Report suitable messages in case
PAT does not exist in STR
(Note: Do not use built-in functions)
*/
#include <iostream>
#include <string>
using namespace std;

class String
{
private:
    string str;
    string ptr;
    string rep;
    int start = 0, patfound = 0;
    int lasts, lastp, lastr;

public:
    String()
    {
        getString();
        getswap();
        replacePattern();
    }
    void getString()
    {
        cout << "Enter the string : ";
        cin >> str;
    }

    void getswap()
    {
        cout << "Enter the pattern to replace : ";
        cin >> ptr;
        cout << "Enter the string to replace : ";
        cin >> rep;
    }    
    void findpattern()
    {
        int i, j, inmatch;
        lasts = str.length() - 1;
        lastp = ptr.length() - 1;
        for (int endmatch = lastp; endmatch <= lasts; endmatch++, start++)
        {
            if (str[endmatch] == ptr[lastp])
            {
                inmatch = start;
                j = 0;
                while (j < lastp)
                {
                    if (str[inmatch] == ptr[j])
                    {
                        inmatch++;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (j == lastp)
                {
                    patfound = 1;
                    replacePattern();
                }
            }
        }
        if (patfound == 0)
        {
            cout << "The pattern is not found in the main string." << endl;
        }
        else
        {
            cout << "The string after pattern match and replace is " << str << endl;
        }
    }
    void replacePattern()
    {
        int i, j;
        lastr = rep.length() - 1;
        cout << "String replace length is " << lastr + 1 << endl;
        if (lastp != lastr)
        {
            cout << "Invalid length of replace string." << endl;
            exit(0);
        }
        else
        {
            i = start;
            for (j = 0; j <= lastr; j++)
            {
                str[i] = rep[j];
                i++;
            }
        }
        return;
    }
};

int main()
{
    String s;
    string str;
    s.getString();
    s.getswap();
    s.findpattern();

    return 0;
}