#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n - 1; i++) // n - 1 pass
    {
        bool flag  = true;
        for(int j = 0; j < n - 1 - i; j++) // swap
        {
            if(arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // swap(arr[j], arr[j+ 1])
                flag = false;
            }
        }
        if(flag== true)  break;// swap did'nt happend;
    }
    for(int i : arr) cout << i << " ";
    return 0;
}