#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string getString(string msg)
{
    string s;
    cout<<msg;
    getline(cin,s);
    return s;
}

string LowerFirstLetterOfEachWord(string s)
{
    bool isFirstLetter = true;
    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' && isFirstLetter)
                {
                  s[i] = tolower(s[i]);
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
        return s;
}

int main()
{
    string msg = "Please enter your string\n";
    string s = getString(msg);
    string LowerString = LowerFirstLetterOfEachWord(s);
    cout <<LowerString <<endl;
    return 0;
}
