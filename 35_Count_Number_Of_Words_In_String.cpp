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

void CountEachWord(string s)
{
    int counter = 0;
    string word = "";

    for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                {
                    if (word != "")
                        {
                            counter++;
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
            counter++;
        }
    cout<<"The number of words in your string is: "<<counter<<endl;
}

int main()
{
    string msg = "Please enter your String:\n";
    string s = getString(msg);

    PrintEachWord(s);

    return 0;
}
