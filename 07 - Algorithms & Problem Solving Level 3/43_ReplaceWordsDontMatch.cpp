#include<string>
#include<iostream>
#include<vector>

using namespace std;
string JoinString(vector<string> vString, string Delim);

vector <string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    int pos = 0;
    string sWord;

    while ((pos = (int)S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

string  LowerAllString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }
    return S1;
}


string ReplaceWordInStringUsingSplit(string S1, string StringToReplace
    , string sRepalceTo, bool MatchCase = true)
{
    vector<string> vString = SplitString(S1, " ");
    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
            {
                s = sRepalceTo;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            {
                s = sRepalceTo;
            }
        }
    }
    return JoinString(vString, " ");
}

void runReplaceWordsDoNotMatchCase()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan"; string ReplaceTo = "USA";
    cout << "\nOriginal String:\n" << S1;
    cout << "\n\nReplace with match case: ";
    cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
    cout << "\n\nReplace with dont match case: ";
    cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);
}




