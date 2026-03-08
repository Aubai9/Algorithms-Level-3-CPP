#include <iostream>
#include <string>

using namespace std;

void replaceWordInString(string orString, string target, string newWord)
{
    cout << "Original string:\n";
    cout << orString << endl;

    int pos = orString.find(target);

    while (pos != string::npos)
        {
            orString.replace(pos, target.length(), newWord);
            pos = orString.find(target,pos + newWord.length());
        }

    cout << "\nString after replacing:\n";
    cout << orString << endl;
}

int main()
{
    string originalString = "Welcome to Syria, Syria is a nice country";
    string targetWord = "Syria";
    string newWord = "Germany";

    replaceWordInString(originalString, targetWord, newWord);

    return 0;
}
