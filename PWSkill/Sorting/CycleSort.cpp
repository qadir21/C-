#include<iostream>
using namespace std;

int partition(int [], int, int);
int kthSmallestElement(int[], int, int, int);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for(int x : arr) cout << " ";
    cout << endl;

    int i = 0; 
    while(i < n){
        int correctIdx = arr[i - 1];
        if(i == correctIdx) i++;
        else swap(arr[i], arr[correctIdx]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}