#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    vector<int>arr(5);
    cout << "Enter the input:-";
    for(int i : arr)
    {
        cin >> arr[i];
    }
    ofstream fout;
    fout.open("zero.txt");
    for (int i : arr)
    {
        fout << arr[i] ;
    }
    fout.close();
    return 0;
}