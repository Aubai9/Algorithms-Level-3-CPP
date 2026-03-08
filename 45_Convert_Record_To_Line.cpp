#include <iostream>
#include <string>
#include<fstream>
#include<vector>
using namespace std;

struct stClient
{
    string Account_Number;
    string Pin_Code;
    string Name;
    string Phone;
    double Account_Balance;
};

stClient ReadInfo()
{
    stClient client;

    cout<<"enter Account_Number ";
    getline(cin,client.Account_Number);

    cout<<"enter Pin_Code ";
    getline(cin,client.Pin_Code);

    cout<<"enter Name ";
    getline(cin,client.Name);

    cout<<"enter Phone ";
    getline(cin,client.Phone);

    cout<<"enter Account_Balance ";
    cin>> client.Account_Balance;

    return client;
}


string ConvertRecordToLine(stClient client,string sep = " || ")
{
    string stClientRecord = "";

    stClientRecord += client.Account_Number + sep;
    stClientRecord += client.Pin_Code + sep;
    stClientRecord += client.Name + sep;
    stClientRecord += client.Phone + sep;
    stClientRecord += to_string(client.Account_Balance);

    return stClientRecord;
}
int main()
{
    cout<<"please enter client data\n";
    stClient client;
    client = ReadInfo();
    cout<<"Client Record\n";
    cout<<ConvertRecordToLine(client);

    return 0;
}
