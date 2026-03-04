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

string UpperLettersOfEachWord(string s)
{

    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' )

                s[i] = toupper(s[i]);


        }
    return s;
}


string LowerLettersOfEachWord(string s)
{

    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')

                s[i] = tolower(s[i]);


        }
    return s;
}

int main()
{
    string msg = "Please enter your string\n";
    string s = getString(msg);
    cout<<"String after Upper\n";
    string UpperString = UpperLettersOfEachWord(s);
    cout <<UpperString <<endl;
    cout<<"String after Lower\n";
    string LowerString = LowerLettersOfEachWord(s);
    cout <<LowerString <<endl;
    return 0;
}
