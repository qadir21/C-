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
    int k;
    cin >> k;
    cout << k << "th smallest element: " << kthSmallestElement(arr, 0, n - 1, k);
    return 0;
}
int partition(int arr[], int startIdx, int endIdx)
{
    int pivotElement = arr[(startIdx + endIdx) / 2];
    int count = 0;
    for(int i = startIdx; i <= endIdx; i++)
    {
        if(i == (startIdx + endIdx) / 2) continue;
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + startIdx;
    int temp = arr[(startIdx + endIdx) / 2];
    arr[(startIdx + endIdx) / 2] = arr[pivotIdx];
    arr[pivotIdx] = temp;
    int i = startIdx;
    int j = endIdx;
    while(i < pivotIdx && j > pivotIdx)
    {
        if(arr[i] <= pivotElement) i++;
        if(arr[j] > pivotElement) j--; 
        else if(arr[i] > pivotElement && arr[j] <= pivotElement)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int kthSmallestElement(int arr[], int startIdx, int endIdx, int k)
{
    int pi = partition(arr, startIdx, endIdx);
    if(pi + 1 == k) return arr[pi];
    else if(pi + 1 < k) return kthSmallestElement(arr, pi + 1, endIdx, k);
    else return kthSmallestElement(arr, startIdx, pi - 1, k); 
}
