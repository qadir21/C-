/*
SPOJ Problem: MPILOT
Top Down DP + Memoization

--------------------------------------------------

Problem:

N pilots diye gaye hain.

Har pilot ke 2 salaries:

cap[i] = Captain salary
ast[i] = Assistant salary

Need:

Exactly N/2 Captains
Exactly N/2 Assistants

--------------------------------------------------

Important Rule:

Pilots age order me diye gaye hain.

Younger pilot older ka captain nahi ban sakta.

Isliye kisi bhi time:

Captains chosen > Assistants chosen
nahi ho sakta.

--------------------------------------------------

DP State:

f(i, a)

Meaning:

Currently pilot index i process karna hai.

a = assistants chosen so far

Then:

captains chosen = i - a

Return:

Minimum salary from index i to end.

--------------------------------------------------

Choices:

1. Current pilot Assistant banao

2. Current pilot Captain banao
   only if assistants > captains

--------------------------------------------------

Base Case:

i == n

All pilots processed

If assistants == n/2

return 0

else invalid

--------------------------------------------------

Time Complexity:

O(n^2)

Space Complexity:

O(n^2)
*/

#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

const long long INF = 1e18;

int n;
int cap[10005], ast[10005];

long long dp[10005][5005];
bool vis[10005][5005];

long long f(int i, int a) {

    /*
    Important Clue:

    Sab pilots assign ho gaye
    */
    if(i == n) {

        if(a == n / 2)
            return 0;

        return INF;
    }

    if(vis[i][a]) return dp[i][a];

    vis[i][a] = true;

    int c = i - a;

    long long ans = INF;

    /*
    Important Clue:

    Assistant choose karo
    */
    if(a < n / 2) {
        ans = min(ans,
            ast[i] + f(i + 1, a + 1));
    }

    /*
    Important Clue:

    Captain choose karo

    Need assistants > captains
    */
    if(c < n / 2 && a > c) {
        ans = min(ans,
            cap[i] + f(i + 1, a));
    }

    return dp[i][a] = ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> cap[i] >> ast[i];
    }

    cout << f(0, 0) << '\n';

    return 0;
}