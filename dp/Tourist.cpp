/*
2 persons simultaneously move from:

(1,1) -> (rows, cols)

Allowed moves:

Down
Right

Cells:

'.' = empty
'*' = star
'#' = blocked

Goal:

Maximum stars collect karo.

Same cell par dono aayein to
star sirf ek baar count hoga.

--------------------------------------------------

Important Input Note:

Testcase format:

cols rows

Example:

9 7

Means:

cols = 9
rows = 7

--------------------------------------------------

DP State:

f(x1, y1, x2)

Second person ka y2 derive hoga:

x1 + y1 = x2 + y2

So:

y2 = x1 + y1 - x2

--------------------------------------------------

Transitions:

1. Down Down
2. Down Right
3. Right Down
4. Right Right

--------------------------------------------------

Time Complexity:

O(rows * cols * rows)

Space Complexity:

O(rows * cols * rows)
*/

#include<iostream>
#include<iomanip>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;

const int NEG = -1000000000;

int rows, cols;
char grid[105][105];
int dp[105][105][105];

int f(int x1, int y1, int x2) {

    int y2 = x1 + y1 - x2;

    /*
    Important Clue:

    Out of bounds
    */
    if(x1 < 1 || y1 < 1 || x2 < 1 || y2 < 1 ||
       x1 > rows || y1 > cols ||
       x2 > rows || y2 > cols)
        return NEG;

    /*
    Important Clue:

    Blocked cell
    */
    if(grid[x1][y1] == '#' || grid[x2][y2] == '#')
        return NEG;

    /*
    Important Clue:

    Both reached destination
    */
    if(x1 == rows && y1 == cols &&
       x2 == rows && y2 == cols) {

        return (grid[rows][cols] == '*');
    }

    int &ans = dp[x1][y1][x2];

    if(ans != -1)
        return ans;

    int best = max({
        f(x1 + 1, y1, x2 + 1), // Down Down
        f(x1 + 1, y1, x2),     // Down Right
        f(x1, y1 + 1, x2 + 1), // Right Down
        f(x1, y1 + 1, x2)      // Right Right
    });

    if(best == NEG)
        return ans = NEG;

    int gain = 0;

    /*
    Important Clue:

    First person star
    */
    if(grid[x1][y1] == '*')
        gain++;

    /*
    Important Clue:

    Same cell pe double count mat karo
    */
    if(!(x1 == x2 && y1 == y2) &&
       grid[x2][y2] == '*')
        gain++;

    return ans = gain + best;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        /*
        Important Clue:

        Input format = cols rows
        */
        cin >> cols >> rows;

        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= cols; j++) {
                cin >> grid[i][j];
            }
        }

        memset(dp, -1, sizeof(dp));

        int ans = f(1, 1, 1);

        cout << max(0, ans) << '\n';
    }

    return 0;
}