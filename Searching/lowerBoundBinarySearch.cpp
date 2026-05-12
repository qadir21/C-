#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int x;
    cin >> x;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int lo = 0;
    int hi = 9;
    bool flag = false;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x) 
        {
            flag = true;
            cout << arr[mid - 1] << endl;
            break;
        }
        else if(arr[mid] < x) lo = mid  + 1;
        else hi = mid - 1; 
    }

if(flag == false) cout << arr[hi] << endl;
return 0;
}