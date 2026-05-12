#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    int ans[n - k + 1];
    int p = -1;
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            p = i;
            break;
        }
    }
    ans[0] = (p != -1) ? arr[p] : 1; 
    int i = 1, j = k;
    while (j < n) {
        if (p >= i) {
            ans[i] = arr[p]; 
        } else {
            p = -1;
            for (int x = i; x <= j; x++) {
                if (arr[x] < 0) {
                    p = x;
                    break;
                }
            }
            ans[i] = (p != -1) ? arr[p] : 1; 
        }
        i++; 
        j++; 
    }
    for (int i = 0; i < n - k + 1; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}