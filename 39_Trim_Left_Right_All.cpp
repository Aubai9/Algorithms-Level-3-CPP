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

string trimLeft(string s)
{

    for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
                {
                    return s.substr(i);
                }
        }
    return "";
}

string trimRight(string s)
{

    for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
                {
                    return s.substr(0, i + 1);
                }
        }
    return "";
}

string trimAll(string s)
{
    return trimRight(trimLeft(s));
}




int main()
{
    string msg = "Please enter your String:\n";
    string s = getString(msg);

    cout<<"Trimmed left "  << trimLeft(s)<<endl;
    cout<<"Trimmed Right " << trimRight(s)<<endl;
    cout<<"Trimmed All "   << trimAll(s)<<endl;

    return 0;
}
