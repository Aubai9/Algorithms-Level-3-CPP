#include<iostream>
#include<string>
#include<vector>

using namespace std;

std::vector<string> vectorWords;

string getString(string msg)
{
    string s;
    cout << msg;
    getline(cin, s);
    return s;
}

void PushWordsInVector(vector<string> & vectorWords,string s)
{
    string word = "";

    for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                {
                    if (word != "")
                        {
                            vectorWords.push_back(word);
                            word = "";
                        }
                }
            else
                {
                    word += s[i];

                }
        }


    if (word != "")
        {
            vectorWords.push_back(word);
        }

}

void PrintEachWordInVector(vector<string> & vectorWords)
{
    for(string word: vectorWords)
        {
            cout<<word<<endl;
        }
}


int main()
{
    string msg = "Please enter your String:\n";
    string s = getString(msg);
    PushWordsInVector( vectorWords, s);
    PrintEachWordInVector(vectorWords);

    return 0;
}
