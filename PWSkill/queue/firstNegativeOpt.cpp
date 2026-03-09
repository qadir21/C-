#include <iostream>
#include <queue>
using namespace std;

void takeInput(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* firstNegative(int arr[], int n, int k){
    queue<int> q;
    int* ans = new int[n-k+1];
    for(int i = 0; i < n; i++){
        if(arr[i] < 0)
            q.push(i);
    }
    int i = 0, j = 0;
    while(i + k <= n){
        while(!q.empty() && q.front() < i)
            q.pop();
        if(q.empty() || q.front() >= i + k)
            ans[j++] = 0;
        else
            ans[j++] = arr[q.front()];
        i++;
    }
    return ans;   // ✅ important
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    takeInput(arr, n);
    display(arr, n);
    int k;
    cin >> k;
    int* ans = firstNegative(arr, n, k);
    display(ans, n - k + 1);
    delete[] ans; // free memory
    return 0;
}