#include<iostream>
#include<vector> 
#include<climits>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v(n, 0); // o means not visited
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0; j < n; j++)
        {
            if(v[j] == 1) continue;
            else if(min > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; 
        x++;
    }

    for(int i : arr) cout << i << " ";
    return 0;
}
