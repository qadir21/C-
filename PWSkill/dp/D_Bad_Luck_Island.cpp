/*
Algorithm (Hinglish):

Codeforces Problem: Bad Luck Island

Teen species hain:

R = Rock
S = Scissors
P = Paper

Rules:

Rock kills Scissors
Scissors kills Paper
Paper kills Rock

Har step par do different species randomly milte hain,
aur weaker mar jaata hai.

Eventually sirf ek species bachegi.

Find probability that final survivor is:

1. Rock
2. Scissors
3. Paper

--------------------------------------------------

DP State:

f(r, s, p)

Meaning:

Current state me:

r rocks
s scissors
p papers

Is state se desired species ke final survive hone ki probability.

--------------------------------------------------

Total Possible Fighting Pairs:

r*s   -> Rock vs Scissors
s*p   -> Scissors vs Paper
r*p   -> Rock vs Paper

total = r*s + s*p + r*p

--------------------------------------------------

Transitions:

Rock vs Scissors:

Scissors dies

(r, s-1, p)

Probability = (r*s)/total

--------------------------------

Scissors vs Paper:

Paper dies

(r, s, p-1)

Probability = (s*p)/total

--------------------------------

Rock vs Paper:

Rock dies

(r-1, s, p)

Probability = (r*p)/total

--------------------------------------------------

Base Cases:

If only Rock left:
s == 0 && p == 0 => Rock probability = 1

If Rock extinct:
r == 0 => Rock probability = 0

Same logic for others.

--------------------------------------------------

Need 3 separate memoized functions:

rockProb()
scissorProb()
paperProb()

--------------------------------------------------

Time Complexity:

O(R * S * P)

--------------------------------------------------

Space Complexity:

O(R * S * P)
*/

#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

double dpR[105][105][105];
double dpS[105][105][105];
double dpP[105][105][105];

double rockProb(int r, int s, int p) {

    if(s == 0 && p == 0) return 1.0;
    if(r == 0) return 0.0;
    if((s == 0 && r > 0 && p > 0)) return 0.0;

    if(dpR[r][s][p] > -0.5) return dpR[r][s][p];

    double total = 1.0 * r * s + 1.0 * s * p + 1.0 * r * p;

    double ans = 0.0;

    /*
    Important Clue:

    Rock kills Scissors
    */
    if(r > 0 && s > 0)
        ans += (1.0 * r * s / total) * rockProb(r, s - 1, p);

    /*
    Important Clue:

    Scissors kills Paper
    */
    if(s > 0 && p > 0)
        ans += (1.0 * s * p / total) * rockProb(r, s, p - 1);

    /*
    Important Clue:

    Paper kills Rock
    */
    if(r > 0 && p > 0)
        ans += (1.0 * r * p / total) * rockProb(r - 1, s, p);

    return dpR[r][s][p] = ans;
}

double scissorProb(int r, int s, int p) {

    if(r == 0 && p == 0) return 1.0;
    if(s == 0) return 0.0;
    if((p == 0 && r > 0 && s > 0)) return 0.0;

    if(dpS[r][s][p] > -0.5) return dpS[r][s][p];

    double total = 1.0 * r * s + 1.0 * s * p + 1.0 * r * p;

    double ans = 0.0;

    if(r > 0 && s > 0)
        ans += (1.0 * r * s / total) * scissorProb(r, s - 1, p);

    if(s > 0 && p > 0)
        ans += (1.0 * s * p / total) * scissorProb(r, s, p - 1);

    if(r > 0 && p > 0)
        ans += (1.0 * r * p / total) * scissorProb(r - 1, s, p);

    return dpS[r][s][p] = ans;
}

double paperProb(int r, int s, int p) {

    if(r == 0 && s == 0) return 1.0;
    if(p == 0) return 0.0;
    if((r == 0 && s > 0 && p > 0)) return 0.0;

    if(dpP[r][s][p] > -0.5) return dpP[r][s][p];

    double total = 1.0 * r * s + 1.0 * s * p + 1.0 * r * p;

    double ans = 0.0;

    if(r > 0 && s > 0)
        ans += (1.0 * r * s / total) * paperProb(r, s - 1, p);

    if(s > 0 && p > 0)
        ans += (1.0 * s * p / total) * paperProb(r, s, p - 1);

    if(r > 0 && p > 0)
        ans += (1.0 * r * p / total) * paperProb(r - 1, s, p);

    return dpP[r][s][p] = ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, s, p;
    cin >> r >> s >> p;

    memset(dpR, -1, sizeof(dpR));
    memset(dpS, -1, sizeof(dpS));
    memset(dpP, -1, sizeof(dpP));

    cout << fixed << setprecision(12)
         << rockProb(r, s, p) << " "
         << scissorProb(r, s, p) << " "
         << paperProb(r, s, p) << '\n';

    return 0;
}