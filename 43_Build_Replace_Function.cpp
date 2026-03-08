#include <iostream>
#include <string>

using namespace std;

string MyReplace(string S1, string Target, string ReplaceTo)
{
    string Result = "";
    int pos = 0;
    int lastPos = 0;

  
    while ((pos = S1.find(Target, lastPos)) != string::npos)
    {
      
        Result += S1.substr(lastPos, pos - lastPos);

        Result += ReplaceTo;

   
        lastPos = pos + Target.length();
    }


    Result += S1.substr(lastPos);

    return Result;
}

void PrintResult(string orString, string target, string newWord)
{
    cout << "Original string:\n" << orString << endl;

    string finalString = MyReplace(orString, target, newWord);

    cout << "\nString after manual replace:\n" << finalString << endl;
}

int main()
{
    string originalString = "Welcome to Syria, Syria is a nice country";
    string targetWord = "Syria";
    string newWord = "Germany";

    PrintResult(originalString, targetWord, newWord);

    return 0;
}