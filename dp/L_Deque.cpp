/* ALGORITHM:
   1. Ye game problem hai jahan dono players optimal play karte hain.

   2. Function f(i,j) batata hai:
      Current player agar subarray [i...j] se khelega,
      toh maximum score difference (current player - opponent)
      kitna bana sakta hai.

   3. Choices:
      - Left element lo arr[i]
        Net gain = arr[i] - f(i+1, j)

      - Right element lo arr[j]
        Net gain = arr[j] - f(i, j-1)

   4. Dono options me se maximum choose karo.

   5. Base Case:
      Agar i == j, sirf ek element bacha hai,
      toh wahi score milega.

   6. Memoization use karo.

   7. Final answer f(0, n-1) hoga.

   8. Large values ke liye long long use karenge.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;


// Input function
void takeInput(long long* arr, int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}


// Recursive DP
long long f(int i, int j, long long arr[], long long dp[][3005]){

    // Sirf ek element bacha
    if(i == j)
        return arr[i];

    // Already solved
    if(dp[i][j] != -1)
        return dp[i][j];

    // Left pick
    long long left = arr[i] - f(i + 1, j, arr, dp);

    // Right pick
    long long right = arr[j] - f(i, j - 1, arr, dp);

    // Best difference
    return dp[i][j] = max(left, right);
}


int main(){

    int n;
    cin >> n;

    long long arr[3005];
    static long long dp[3005][3005];

    takeInput(arr, n);

    memset(dp, -1, sizeof(dp));

    cout << f(0, n - 1, arr, dp) << endl;

    return 0;
}