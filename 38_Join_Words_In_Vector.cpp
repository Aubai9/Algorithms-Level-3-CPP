#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> vectorNames;

void joinVectorWords(vector<string> & vectorNames)
{
    string FullName = "";
    string sep = " ";
    for(int i = 0; i< vectorNames.size(); i++)
        {
            FullName += vectorNames[i];
            if(i != vectorNames.size() -1)
                {
                    FullName += sep;
                }
        }
    cout<<FullName;
}

int main()
{
    string firstName = "Aubai";
    string lastName = "Mahmmoud";

    vectorNames.push_back(firstName);
    vectorNames.push_back(lastName);

    joinVectorWords(vectorNames);



    return 0;
}
