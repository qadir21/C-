/*
Algorithm (Hinglish) :

AtCoder DP Contest - I Coins
Top Down Memoization Solution

Problem:

n coins diye hain
har coin ka probability p[i] hai head aane ka.

Find probability:

Heads > Tails

--------------------------------------------------

DP State:

f(i, h)

Meaning:

Index i se lekar n-1 tak coins use karke
exactly h heads lane ki probability.

--------------------------------------------------

Transition:

Coin i ke 2 options:

1. Head aaye:

p[i] * f(i+1, h-1)

2. Tail aaye:

(1-p[i]) * f(i+1, h)

--------------------------------------------------

Base Case:

Agar i == n

sab coins use ho gaye

if h == 0 => 1
else       => 0

--------------------------------------------------

Final Answer:

sum of f(0, heads)

where heads > n/2

--------------------------------------------------

Time Complexity:

O(n^2)

Space Complexity:

O(n^2)
*/

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

double dp[3005][3005];
bool vis[3005][3005];

int n;

double f(vector<double>& p, int i, int h){

    /*
    Important Clue:

    Negative heads impossible
    */
    if(h < 0) return 0.0;

    /*
    Important Clue:

    Coins khatam
    */
    if(i == n){
        return (h == 0 ? 1.0 : 0.0);
    }

    if(vis[i][h]) return dp[i][h];

    vis[i][h] = true;

    return dp[i][h] =

        /*
        Current coin = Head
        */
        p[i] * f(p, i + 1, h - 1)

        +

        /*
        Current coin = Tail
        */
        (1.0 - p[i]) * f(p, i + 1, h);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    vector<double> p(n);

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    double ans = 0.0;

    for(int heads = n / 2 + 1; heads <= n; heads++){
        ans += f(p, 0, heads);
    }

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}