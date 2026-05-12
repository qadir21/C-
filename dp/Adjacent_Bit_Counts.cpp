/*
Ye classic DP problem hai:

Hume binary strings count karni hain
length = n

jisme exactly k adjacent set bits hon.

Adjacent set bit matlab:

11

Agar do consecutive 1 aaye,
toh adjacent pair count +1

--------------------------------------------------

Example:

String = 1110

Pairs:

1 1 -> +1
1 1 -> +1
1 0 -> +0

Total = 2

--------------------------------------------------

DP State:

dp[n][k][last]

Meaning:

Length n ki strings possible hain
jinme exactly k adjacent pairs hain
aur previous(last) bit given hai.

last = 0 or 1

--------------------------------------------------

Transition:

Current position par 0 ya 1 rakh sakte hain.

Case 1: Put 0

Adjacent pair nahi banega

solve(n-1, k, 0)

--------------------------------------------------

Case 2: Put 1

Agar last == 1

Toh new adjacent pair banega

solve(n-1, k-1, 1)

Agar last == 0

Toh pair nahi banega

solve(n-1, k, 1)

--------------------------------------------------

Base Case:

n == 1

Agar k == 0 => 1 way
warna 0

--------------------------------------------------

Time Complexity:

O(n * k * 2)

Space Complexity:

O(n * k * 2)
*/

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int dp[105][105][2];

struct TestCase{
    int id, n, k;
};

vector<TestCase> input(){
    int t;
    cin >> t;

    vector<TestCase> tc(t);

    for(int i = 0; i < t; i++) {
        cin >> tc[i].id >> tc[i].n >> tc[i].k;
    }

    return tc;
}

int adjacentBitCount(int n, int k, int last){

    if(k < 0) return 0;

    if(n == 1){
        return (k == 0);
    }

    if(dp[n][k][last] != -1)
        return dp[n][k][last];

    int ans = 0;

    /*
    Important Clue:

    Current bit = 0
    */
    ans += adjacentBitCount(n - 1, k, 0);

    /*
    Important Clue:

    Current bit = 1
    */
    if(last == 1)
        ans += adjacentBitCount(n - 1, k - 1, 1);
    else
        ans += adjacentBitCount(n - 1, k, 1);

    return dp[n][k][last] = ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<TestCase> tests = input();

    for(auto& tc : tests){

        memset(dp, -1, sizeof(dp));

        /*
        Important Clue:

        First bit 0 ho sakta hai
        ya 1 ho sakta hai
        */
        int ans =
            adjacentBitCount(tc.n, tc.k, 0) +
            adjacentBitCount(tc.n, tc.k, 1);

        cout << tc.id << " " << ans << "\n";
    }

    return 0;
}