#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], mx = INT_MIN, count = 0, ans = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] > mx){
            mx = arr[i];
            count = 1;
        }else if(arr[i] = mx){
            count++;
            ans = max(ans, count);
        }
    }
    cout << ans << " ";
    return 0;
}