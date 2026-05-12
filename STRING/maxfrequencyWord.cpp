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
    for(char c : sent)
    {
        if(c != ' ')
            word += c;
        else if(!word.empty())
        {
            words.push_back(word);
            word = "";
        }
    }
    if(!word.empty()) 
        words.push_back(word);
    string most_frequent_word;
    int max_freq = 0;
    for(int i = 0; i < words.size(); i++)
    {
        int count = 0; 
        for(int j = 0; j < words.size(); j++)
        {
            if(words[i] == words[j]) count++;
        }  
        if(count > max_freq) 
        {
            max_freq = count;
            most_frequent_word = words[i];
        }
    } 
    cout << "Most frequent word: " << most_frequent_word << " | Frequency: " << max_freq << endl;
    
    return 0;
}