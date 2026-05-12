/*#include<iostream> 
#include<vector>
using namespace std;

int partition(int [], int, int);
void quickSort(int [], int, int);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1);
    for(int x : arr) cout << x << " ";
    return 0;
}

void quickSort(int a[], int startIdx, int endIdx)
{
    if(startIdx >= endIdx) return;
    int pivotIdx = partition(a, startIdx, endIdx);
    quickSort(a, startIdx, pivotIdx - 1);
    quickSort(a, pivotIdx + 1, endIdx);
}

int partition(int arr[], int startIdx, int endIdx)
{
    int pivotElement = arr[startIdx];
    int count = 0;
    for(int i = startIdx; i <= endIdx; i++)
    {
        if(i == startIdx) countinue;
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + startIdx;
    int temp = arr[startIdx];
    arr[startIdx] = arr[pivotIdx];
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
}*/
#include<iostream> 
#include<vector>
using namespace std;

int partition(int [], int, int);
void quickSort(int [], int, int);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1);
    for(int x : arr) cout << x << " ";
    return 0;
}

void quickSort(int a[], int startIdx, int endIdx)
{
    if(startIdx >= endIdx) return;
    int pivotIdx = partition(a, startIdx, endIdx);
    quickSort(a, startIdx, pivotIdx - 1);
    quickSort(a, pivotIdx + 1, endIdx);
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