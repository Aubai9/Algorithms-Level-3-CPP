#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string getString(string msg)
{
    string s;
    cout<<msg;
    getline(cin, s);
    return s;
}

string InvertedLetters(string s)
{
    for (int i = 0 ; i< s.length(); i++)
        {
            if(islower(s[i]))
                s[i] = toupper(s[i]);
            else if(isupper(s[i]))
                s[i] = tolower(s[i]);
        }

    return s;
}


void printInvertedLetters(string s )
{
    cout<<InvertedLetters(s);
}

int main()
{
    string msg = "Please enter your String\n";
    string s = getString(msg);
    printInvertedLetters(s);
    return 0;
}
