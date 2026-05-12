#include<iostream>
using namespace std;

void takeInput(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void display(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void firstNegative(int a[], int k, int n, int ans[]){
    int idx = 0;

    for(int i = 0; i <= n - k; i++){
        bool found = false;

        for(int j = i; j < i + k; j++){
            if(a[j] < 0){
                ans[idx++] = a[j];
                found = true;
                break;
            }
        }

        if(!found)
            ans[idx++] = 0;
    }
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    takeInput(arr, n);
    display(arr, n);
    int k;
    cin >> k;
    int* ans = new int[n-k+1];
    firstNegative(arr, k, n, ans);
    display(ans, n-k+1);
    delete[] arr;
    delete[] ans;
    return 0;
}