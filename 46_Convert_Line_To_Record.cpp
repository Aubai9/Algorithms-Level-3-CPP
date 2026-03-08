
#include <iostream>
#include <string>
#include<vector>
#include<iomanip>

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


string ConvertRecordToLine(stClient client,string sep = " | ")
{
    string stClientRecord = "";

    stClientRecord += client.Account_Number + sep;
    stClientRecord += client.Pin_Code + sep;
    stClientRecord += client.Name + sep;
    stClientRecord += client.Phone + sep;
    stClientRecord += to_string(client.Account_Balance);

    return stClientRecord;
}


vector <string> splitString (string s, string Delim = " | ")
{
    vector <string> vString;
    short pos = 0;
    string sWord;
    while((pos = s.find(Delim))!= std::string::npos)
        {
            sWord = s.substr(0,pos);
            if(sWord != "")
                {
                    vString.push_back(sWord);
                }
            s.erase(0,pos + Delim.length());
        }
    if(s!= "")
        {
            vString.push_back(s);
        }
    return vString;
}


stClient ConvertLineToRecord(string lineClient, string sep = " | ")
{
    stClient client;
    vector <string> vClientData;
    vClientData = splitString(lineClient,sep);

    client.Account_Number  = vClientData[0];
    client.Pin_Code        = vClientData[1];
    client.Name            = vClientData[2];
    client.Phone           = vClientData[3];
    client.Account_Balance = stod(vClientData[4]);

    return client;
}

void printClientRecord(stClient client)
{

        cout << left << setw(20) << "Account Number"  << ": " << client.Account_Number << endl;
        cout << left << setw(20) << "Pin Code"        << ": " << client.Pin_Code << endl;
        cout << left << setw(20) << "Name"            << ": " << client.Name << endl;
        cout << left << setw(20) << "Phone"           << ": " << client.Phone << endl;
        cout << left << setw(20) << "Account Balance" << ": " << client.Account_Balance << endl;

}

int main()
{
    cout<<"please enter client data\n";
    stClient client;
    client = ReadInfo();

    cout<<"\n--------------------------------|Client Line|--------------------------------\n";


    string lineClient = ConvertRecordToLine(client);

    cout<<lineClient<<endl;


    cout<<"\n--------------------------------|Client Line|--------------------------------\n";
    stClient RecordClient;

    RecordClient = ConvertLineToRecord(lineClient);



    printClientRecord(RecordClient);
    return 0;
}
