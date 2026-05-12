#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0; i< 10; i++) cin >> arr[i];
    int lo = 0;
    int hi = 9;
    int ans = -1;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == mid) lo = mid + 1;
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout << ans << endl;
}