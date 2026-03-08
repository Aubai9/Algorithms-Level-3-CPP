#include <iostream>
#include<string>

using namespace std;

string readString(string msg)
{
    string s;
    cout<<msg<<endl;
    getline(cin,s);
    return s;
}


void printReversedString(string s)
{
    string word = "";
    for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
                {
                    word += s[i] + word;
                }
            else
                {
                    cout<<word <<" ";
                    word = "";
                }
        }
    cout<<word;
}

int main()
{
    printReversedString(readString("please enter String to print the reverse of it"));
    return 0;
}
