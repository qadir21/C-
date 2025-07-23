#include<iostream>
#include<string>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string sen;
    cout << "Enter Sentence: ";
    getline(cin , sen);
    stringstream ss(sen);
    string temp;
    vector<string> v;
    while(ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int max_count = 1, count = 1;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == v[i - 1]) count++;
        else count = 1;
        max_count = max(max_count, count); 
    }
    count = 1;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == v[i - 1]) count++;
        else count = 1;
        if(count == max_count) cout << v[i] << " " <<  max_count <<  endl;
    }
    return 0;
}