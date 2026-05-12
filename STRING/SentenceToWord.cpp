#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string sent;
    cout << "Enter a Sentence: ";
    getline(cin, sent);
    vector<string> words;
    string word = "";
    int i = 0;
    while(sent[i] != '\0')
    {
        if(sent[i] != ' ')
        {
            word += sent[i];
        }
        else if(word != "")
        {
            words.push_back(word);
            word = "";
        }
        i++;
    }
    if(word != "") 
    {
        words.push_back(word);
    }
    cout << "Extracted Words: " << endl;
    for(string w : words)
    {
        cout << "[" << w << "] " << endl;
    }  
    return 0;
}