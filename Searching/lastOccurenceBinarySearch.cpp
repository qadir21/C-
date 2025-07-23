#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int x;
    cin >> x;
    for(int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    int lo = 0;
    int hi = 19;
    bool flag = false;

    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x)
        {
            if(mid == 19 || arr[mid + 1] != x)
            {
                flag = true;
                cout << mid;
                break;
            }
            else lo = mid + 1;
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }

    if(flag == false) cout << -1 << endl;
    return 0;
}