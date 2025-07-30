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
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] <= 0) continue;
            else if(min > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for(int i = 0; i < n; i++) arr[i] = -arr[i];
    for(int ele : arr) cout << ele << " ";
}