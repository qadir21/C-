#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin , str);
    cout << "The enterd string is: " <<  str << endl;
    int i = 0, count = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] =='e' || str[i] == 'E' || str[i] ==  'i' || str[i] =='I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') count++;
        i++;
    }
    cout << "The vowel in the " << str << " is : " << count << endl;
    return 0;
}