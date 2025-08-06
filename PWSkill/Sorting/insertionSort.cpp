#include<iostream> 
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++)
    {
        int j = i; 
        // while(arr[j] < arr[j - 1])
        // while(j >= 1)
        // {
        //     if(arr[j] >= arr[j - 1]) break;
        //     else
        //     {
        //         int temp  = arr[j];
        //         arr[j] = arr[j - 1];
        //         arr[j - 1] = temp;
        //     }
        //     j--;
        // }
        while( j > 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    for(int i : arr) cout << i << " ";
    return 0;
}