#include<iostream>
#include<string>
using namespace std;
string getString(string msg)
{
    string s;
    cout<<msg;
    getline(cin,s);
    return s;
}

string UpperFirstLetterOfEachWord(string s)
{
    bool isFirstLetter = true;
    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' && isFirstLetter)
                {
                  s[i] = toupper(s[i]);
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
        return s;
}

int main()
{
    string msg = "Please enter your string\n";
    string s = getString(msg);
    string UpperString = UpperFirstLetterOfEachWord(s);
    cout <<UpperString <<endl;
    return 0;
}
