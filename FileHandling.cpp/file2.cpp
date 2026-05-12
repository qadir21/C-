#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("zoom.txt");
    char c;
    fin >> c;
    while(!fin.eof())
    {
        cout << c << endl;
        fin >> c;
    }
    fin.close();
    return 0;
}