#include<iostream>
#include<string>

using namespace std;

string getString(string msg)
{
    string s;
    cout << msg;
    getline(cin, s);
    return s;
}

void PrintEachWord(string s)
{
    string word = "";

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (word != "")
            {
                cout << word << endl;
                word = "";
            }
        }
        else
        {
            word += s[i];
        }
    }


    if (word != "")
    {
        cout << word << endl;
    }
}

int main()
{
    string msg = "Please enter your String:\n";
    string s = getString(msg);

    PrintEachWord(s);

    return 0;
}
