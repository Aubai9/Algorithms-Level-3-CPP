#include<iostream>
#include<string>
#include<cctype>

using namespace std;

char getChar(string msg)
{
    char c;
    cout<<msg;
    cin>>c;
    return c;
}

char InvertChar(char c)
{
    if(islower(c))
        c = toupper(c);
    else if(isupper(c))
        c = tolower(c);
    else
        return c;
    return c;
}


void printInvertedChar(char c )
{
    cout<<InvertChar(c);
}

int main()
{
    string msg = "Please enter your Char\n";
    char c = getChar(msg);
    printInvertedChar(c);
    return 0;
}
