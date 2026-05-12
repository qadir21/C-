#include<iostream> 
#include<vector>
using namespace std;

void takeInput(int arr[], int n){
    for(int i = 0; i < n; i++) cin >> arr[i];
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void heapify(int i, int arr[], int n){
    while(true){
        int left = 2*i + 1;
        int right = 2*i + 2;
        if(left >= n) break;
        int smallest = left;
        if(right < n && arr[right] < arr[left]) smallest = right;
        if(arr[i] > arr[smallest]){
            swap(arr[i], arr[smallest]);
            i = smallest;
        }
        else break;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    takeInput(arr, n);
    display(arr, n);
    for(int i = n - 1 / 2; i  >= 0; i--){
        heapify(i, arr, n);
    }
    display(arr, n);
    return 0;
}