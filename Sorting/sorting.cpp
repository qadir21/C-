#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int x;
    // input
    while(cin >> x) v.push_back(x);
    //sort
    sort(v.begin(), v.end()); // O(n * log n)
    // display
    for(int i : v) cout << i << " ";
    // descending
    reverse(v.begin(), v.end());
    cout << endl;
    for(int i : v) cout << i << " ";
    return 0;
}