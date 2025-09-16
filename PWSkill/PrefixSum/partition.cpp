#include<iostream> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    // formation of prefix sum
    for(int i = 1; i < n; i++) arr[i] += arr[i - 1];
    // chaeck if any x exists
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(2 * arr[i] == arr[n - 1]){
            idx = i;
            break;
        }
    }
    if(idx != -1) cout << "Yes it can be partitioned after " << idx;
    else cout << "Can't be partitioned";
    return 0;
}