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

void CountLetters(string & s,int & capital,int &small)
{
    capital = 0;
    small = 0;
    for (int i = 0 ; i < s.length(); i++)
        {
            if(isupper(s[i]))
                capital++;
            else if(islower(s[i]))
                small++;
        }
}




void printCounters(string & s, int  CapitalCounter, int SmallCounter)
{
    cout<<"Your string length is "<< s.length()<<endl;
    cout<<"Capital letters Count "<< CapitalCounter<<endl;
    cout<<"Small letters Count "<< SmallCounter<<endl;
}

int main()
{
    int CapitalCounter,SmallCounter;
    string msg = "Please enter your String\n";
    string s = getString(msg);
    CountLetters(s, CapitalCounter,SmallCounter);
    printCounters(s, CapitalCounter, SmallCounter);
    return 0;
}
