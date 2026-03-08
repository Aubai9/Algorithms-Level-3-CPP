#include <iostream>
#include <string>

using namespace std;

string removeAllPunctuationsFromString(string s)
{
    string result = "";
    for(int i = 0; i < s.length(); i++)
        {
            if(!ispunct(s[i]))
                {
                    result += s[i];
                }
        }
    return result;
}

void PrintResult(string s)
{
   cout<<"Punctuations removed: "<<endl;
   cout<< s;
}

int main()
{
    string originalString = "Welcome to Syria, Syria is a nice country; it's amazing";
    cout<<originalString<<endl;
    string StringWithoutPunctuations = removeAllPunctuationsFromString(originalString);
    PrintResult(StringWithoutPunctuations);

    return 0;
}
