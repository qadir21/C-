#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin , str);
    cout << "The enterd string is: " <<  str << endl;
    int i = 1;
    while(str[i] != '\0')
    {
        if(i % 2 == 0) str[i] = 'a';
        i++;
    }
    cout << "String after updation " << str << endl;
    return 0;
} 