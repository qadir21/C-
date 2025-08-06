#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string with space: ";
    getline(cin, str);
    int i = 0, l = 0;
    while(str[i] != '\0')
    {
        l++, i++;
    }
    int k = l - 1, j;
    if(l % 2 == 0) j = l - 1;
    j = (l / 2) + 1;   
    while(j < k)
    {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
        k--,  j++;
    }
    cout << str << endl;
    return 0;
}