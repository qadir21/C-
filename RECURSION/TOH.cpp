#include<iostream>
using namespace std;
void TOH(int sp, string source, string auxiliary, string destination)
{
    if(sp == 0) return;
    TOH(sp - 1, source, destination, auxiliary); 
    cout << "Move disk " << sp << " from " << source << " to " << destination << endl; 
    TOH(sp - 1, auxiliary, source, destination); 
}
int main()
{
    int spindal;
    cout << "Enter number of disks: ";
    cin >> spindal;
    TOH(spindal, "Source", "Auxiliary", "Destination");
    return 0;
}