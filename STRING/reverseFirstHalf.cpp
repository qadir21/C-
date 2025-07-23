#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter even length string: ";
    getline(cin, str);   
    int i = 0,  j = 0, count = 0;
    while(str[i] != '\0')
    {
        count += 1; 
        i++;
    }
    int k = (count / 2) - 1;
    while(j < k)
    {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
        j++, k--;
    }
    cout << str << endl;
    return 0;
}