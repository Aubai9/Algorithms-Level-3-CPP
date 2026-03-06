#include<iostream>
#include<string>

using namespace std;

string getString(string msg)
{
    string s;
    cout<< msg;
    getline(cin,s);
    return s;
}

bool checkVowel(char c)
{
    c = tolower(c);
    return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'));
}

int CountVowelsChars(string s){
   int counter = 0;
   for(int i = 0 ; i < s.length();i++){
      if(checkVowel(s[i]))
        counter++;
   }
   return counter;
}

void printResult( string s,int counter)
{
  cout<<"Number of Vowels is: "<<counter;
}

int main()
{

    string msg = "Please enter your String\n";
    string s = getString(msg);
    int counter = CountVowelsChars(s);
    printResult(s,counter);
    return 0;
}
