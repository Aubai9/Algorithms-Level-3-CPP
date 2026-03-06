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
    cout<<"Vector joining: "<<FullName<<endl;
}

void joinArrayWords(string  names[2], short size)
{
    string FullName = "";
    string sep = " ";
    for(int i = 0; i < size; i++)
        {
            FullName += names[i];
            if(i != size -1)
                {
                    FullName += sep;
                }
        }
    cout<<"Array joining: "<<FullName<<endl;
}



int main()
{
    string firstName = "Aubai";
    string lastName = "Mahmmoud";

    vectorNames.push_back(firstName);
    vectorNames.push_back(lastName);

    joinVectorWords(vectorNames);

    //Array join

    string names[2] = {firstName,lastName};
    joinArrayWords(names, 2);


    return 0;
}
