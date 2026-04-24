/*
Algorithm (Hinglish):

Codeforces - Bad Luck Island
Bottom Up DP

Given:

r = Rock
s = Scissors
p = Paper

Rules:

Rock kills Scissors
Scissors kills Paper
Paper kills Rock

Har step par randomly 2 different species fight karte hain.

Eventually sirf ek type bachega.

Find probability:

1. Rock survives
2. Scissors survives
3. Paper survives

--------------------------------------------------

DP State:

dp[r][s][p]

Meaning:

Probability of reaching state:

r rocks
s scissors
p papers

--------------------------------------------------

Start State:

dp[R][S][P] = 1

--------------------------------------------------

Transitions:

From state (r,s,p):

Total fights:

r*s + s*p + r*p

--------------------------------

Rock vs Scissors:

Scissors dies

(r, s-1, p)

--------------------------------

Scissors vs Paper:

Paper dies

(r, s, p-1)

--------------------------------

Paper vs Rock:

Rock dies

(r-1, s, p)

--------------------------------------------------

Final States:

Rock survives:

(r > 0, 0, 0)

Scissors survives:

(0, s > 0, 0)

Paper survives:

(0, 0, p > 0)

--------------------------------------------------

Time Complexity:

O(R * S * P)

Space Complexity:

O(R * S * P)
*/

#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

double dp[105][105][105];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int R, S, P;
    cin >> R >> S >> P;

    /*
    Important Clue:

    Initial state probability
    */
    dp[R][S][P] = 1.0;

    for(int r = R; r >= 0; r--) {
        for(int s = S; s >= 0; s--) {
            for(int p = P; p >= 0; p--) {

                if(dp[r][s][p] == 0.0) continue;

                double total =
                    1.0 * r * s +
                    1.0 * s * p +
                    1.0 * r * p;

                if(total == 0.0) continue;

                /*
                Important Clue:

                Rock kills Scissors
                */
                if(r > 0 && s > 0)
                    dp[r][s - 1][p] +=
                    dp[r][s][p] * (1.0 * r * s / total);

                /*
                Important Clue:

                Scissors kills Paper
                */
                if(s > 0 && p > 0)
                    dp[r][s][p - 1] +=
                    dp[r][s][p] * (1.0 * s * p / total);

                /*
                Important Clue:

                Paper kills Rock
                */
                if(r > 0 && p > 0)
                    dp[r - 1][s][p] +=
                    dp[r][s][p] * (1.0 * r * p / total);
            }
        }
    }

    double rock = 0.0;
    double scissor = 0.0;
    double paper = 0.0;

    /*
    Important Clue:

    Final Rock states
    */
    for(int r = 1; r <= R; r++)
        rock += dp[r][0][0];

    /*
    Important Clue:

    Final Scissors states
    */
    for(int s = 1; s <= S; s++)
        scissor += dp[0][s][0];

    /*
    Important Clue:

    Final Paper states
    */
    for(int p = 1; p <= P; p++)
        paper += dp[0][0][p];

    cout << fixed << setprecision(12)
         << rock << " "
         << scissor << " "
         << paper << '\n';

    return 0;
}