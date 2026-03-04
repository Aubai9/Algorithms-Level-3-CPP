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

int CountTargetInString(string & s,char c)
{
    int counter =0;
    for(int i = 0; i < s.length();i++)
        {
            if(s[i]== c)
                {
                    counter++;
                }
        }
    return counter;
}




void printResult(string & s,char &c ,int & counter)
{
    cout<<"Your string is "<< s <<endl;
    cout<<"Letter "<< c <<" Count = "<<counter;

}

int main()
{
    int CapitalCounter,SmallCounter;
    string msg = "Please enter your String\n";
    string s = getString(msg);
    char target ;
    cout<<"Please enter your Char\n";
    cin>>target;
    int counter = CountTargetInString(s, target);
    printResult(s,target,counter);
    return 0;
}
