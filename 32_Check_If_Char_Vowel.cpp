#include<iostream>
#include<string>

using namespace std;

char getChar(string msg)
{
    char c;
    cout<<msg;
    cin>>c;
    return c;
}

bool checkVowel(char c)
{
    c = tolower(c);
    return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'));
}

void printResult(char & c)
{
    checkVowel(c) ? cout<<"Yes, "<<c<<" is Vowel"<<endl : cout<<"No, "<<c<<" is not Vowel"<<endl; ;
}

int main()
{

    string msg = "Please enter your Char\n";
    char c = getChar(msg);
    printResult(c);
    return 0;
}
