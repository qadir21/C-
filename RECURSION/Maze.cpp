#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc == ec) return 1;
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);
    return rightways + downways;
}
int maze1(int row, int col)
{
    if(row < 1 || col < 1) return 0;
    if(row == 1 || col == 1) return 1;
    int rightways = maze1(row, col - 1);
    int downways = maze1(row - 1, col);
    return rightways + downways;
}
void printPath(int sr, int sc, int er, int ec, string s)
{
    if(sr > er || sc > ec) return;
    if(sr == er && sc == ec)  
    {
        cout << s << endl;  // Path print karna zaroori hai
        return;
    }
    printPath(sr, sc + 1, er, ec, s + "R ->");
    printPath(sr + 1, sc, er, ec, s + "D ->");
}
int main()
{
    int srow, scolumn, erow, ecolumn;
    cout << "Enter starting row: ";
    cin >> srow;
    cout << "Enter starting column: ";
    cin >> scolumn;
    cout << "Enter ending row: ";
    cin >> erow;
    cout << "Enter ending column: ";
    cin >> ecolumn;

    cout << "Total Paths: " << maze(srow, scolumn, erow, ecolumn) << endl;
    cout << "All Possible Paths: " << endl;
    printPath(srow, scolumn, erow, ecolumn, "");

    return 0;
}