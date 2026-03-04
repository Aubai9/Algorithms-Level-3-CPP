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

void PrintFirstLetterOfString(string s)
{
    bool isFirstLetter = true;
    cout<<"first letter in this string\n";
    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' && isFirstLetter)
                {
                    cout<<s[i]<<endl;
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
}

int main()
{
    string msg = "Please enter your string\n";
    string s = getString(msg);
    PrintFirstLetterOfString(s);
    return 0;
}
