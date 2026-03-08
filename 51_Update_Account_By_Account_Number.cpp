#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

const string ClientsFileName = "D:/cppApp/app/Clients.txt";

struct stClient
{
    string Account_Number;
    string Pin_Code;
    string Name;
    string Phone;
    double Account_Balance;
};


vector<string> splitString(string s, string Delim = "#//#")
{
    vector<string> vString;
    size_t pos = 0;
    string sWord;
    while ((pos = s.find(Delim)) != std::string::npos)
    {
        sWord = s.substr(0, pos);
        if (sWord != "") vString.push_back(sWord);
        s.erase(0, pos + Delim.length());
    }
    if (s != "") vString.push_back(s);
    return vString;
}


stClient convertLineToRecord(string lineClient, string sep = "#//#")
{
    stClient client;
    vector<string> vClientData = splitString(lineClient, sep);

    if (vClientData.size() >= 5)
    {
        client.Account_Number = vClientData[0];
        client.Pin_Code = vClientData[1];
        client.Name = vClientData[2];
        client.Phone = vClientData[3];
        client.Account_Balance = stod(vClientData[4]);
    }
    return client;
}


string convertRecordToLine(stClient client, string sep = "#//#")
{
    string line = "";
    line += client.Account_Number + sep;
    line += client.Pin_Code + sep;
    line += client.Name + sep;
    line += client.Phone + sep;
    line += to_string(client.Account_Balance);
    return line;
}


vector<stClient> LoadFromFile(string fileName)
{
    vector<stClient> vClients;
    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            stClient client = convertLineToRecord(line, "#//#");
            vClients.push_back(client);
        }
        myFile.close();
    }
    return vClients;
}

void PrintClientRecordLine(stClient Client) {
    cout << "| " << left << setw(15) << Client.Account_Number;
    cout << "| " << left << setw(10) << Client.Pin_Code;
    cout << "| " << left << setw(40) << Client.Name;
    cout << "| " << left << setw(12) << Client.Phone;
    cout << "| " << left << setw(12) << fixed << setprecision(2) << Client.Account_Balance;
}

void showClient(stClient client)
{

    cout << "\Account Details\n" << endl;

    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";

    cout << "\n____________________\n" << endl;
    PrintClientRecordLine(client);
    cout << endl;
    cout << "____________________\n" << endl;
}

void saveClientsToFile(string fileName, vector<stClient>& vClients)
{
    fstream myFile;
    myFile.open(fileName, ios::out);

    if (myFile.is_open())
    {
        for (stClient &C : vClients)
        {
            myFile << convertRecordToLine(C) << endl;
        }
        myFile.close();
    }
}


void updateClientByAccountNumber(vector<stClient>& vClients, string AccNumber)
{
    char confirm = 'n';

    for (stClient &Client : vClients) 
    {
        if (Client.Account_Number == AccNumber)
        {
            cout << "\nClient Found! Current Details:\n";
            showClient(Client);

            cout << "\nAre you sure you want to update this client? (y/n): ";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\n--- Enter New Data ---\n";

               
                cout << "Enter Pin Code: ";
                cin >> Client.Pin_Code;

                cout << "Enter Name: ";
                cin.ignore(); 
                getline(cin, Client.Name);

                cout << "Enter Phone: ";
                cin >> Client.Phone;

                cout << "Enter Balance: ";
                cin >> Client.Account_Balance;

                
                saveClientsToFile(ClientsFileName, vClients);
                cout << "\nClient Updated Successfully!" << endl;
            }
            return;
        }
    }
    cout << "\nClient Not Found!" << endl;
}

int main()
{

    vector<stClient> vClients = LoadFromFile(ClientsFileName);


    string Account_Number;
    cout << "Enter account number to delete: ";
    cin >> Account_Number;

    updateClientByAccountNumber(vClients, Account_Number);

    return 0;
}
