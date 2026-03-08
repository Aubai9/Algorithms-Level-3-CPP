#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct stClient {
    string Account_Number;
    string Pin_Code;
    string Name;
    string Phone;
    double Account_Balance;
};

string ConvertRecordToLine(stClient Client, string Seperator = "#//#") {
    string stClientRecord = "";
    stClientRecord += Client.Account_Number + Seperator;
    stClientRecord += Client.Pin_Code + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.Account_Balance);
    return stClientRecord;
}

stClient ReadNewClient() {
    stClient Client;
    cout << "Enter Account Number? ";
    getline(cin >> ws, Client.Account_Number);
    cout << "Enter PinCode? ";
    getline(cin, Client.Pin_Code);
    cout << "Enter Name? ";
    getline(cin, Client.Name);
    cout << "Enter Phone? ";
    getline(cin, Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.Account_Balance;
    return Client;
}

void AddDataLineToFile(string FileName, string stDataLine) {
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app); 

    if (MyFile.is_open()) {
        MyFile << stDataLine << endl;
        MyFile.close();
    }
}

void AddNewClients() {
    char AddMore = 'Y';
    do {
        cout << "Adding New Client:\n\n";
        stClient Client = ReadNewClient();
        
        AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

        cout << "\nClient Added Successfully, do you want to add more clients? [Y/N] ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}

int main() {
    AddNewClients();
    return 0;
}