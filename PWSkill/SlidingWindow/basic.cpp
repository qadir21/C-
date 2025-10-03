#include<iostream>
using namespace std;
int main(){
    int n, k, maxSum = INT_MIN, maxIdx = -1, prevSum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> k;

    // for(int i = k; i <= n - k; i++){ // total no of opertaion = n - k + 1
    //     int sum = 0; 
    //     for(int j = i; j < i + k; j++) sum += arr[j]; // k times
    //     if(maxSum < sum){
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
    // }
    // tno = (n - k + 1) * k
    // Time Complexity O(k * n)
    
    // Sliding window algorithm
    for(int i = 0; i < k; i++) prevSum += arr[i];
    maxSum = prevSum;
    int i = 1, j = k;
    while(j < n){
        int currentSum = prevSum + arr[j] - arr[i - 1];
        if(maxSum < currentSum){
            maxSum = currentSum;
            maxIdx = i;
        }
        prevSum = currentSum;
        i++;
        j++;
    }

    cout << maxSum << endl;
    cout << maxIdx;
    return 0;
}