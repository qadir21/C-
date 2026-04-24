/*
SPOJ Final Compile Safe Bottom Up
(No vector, no string, no modern syntax)
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int NEG = -1000000000;

char g[105][105];
int prevdp[105][105];
int curdp[105][105];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {

        int cols, rows;
        cin >> cols >> rows;

        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= cols; j++) {
                cin >> g[i][j];
            }
        }

        for(int i = 0; i < 105; i++) {
            for(int j = 0; j < 105; j++) {
                prevdp[i][j] = NEG;
                curdp[i][j] = NEG;
            }
        }

        if(g[1][1] != '#') {
            if(g[1][1] == '*') prevdp[1][1] = 1;
            else prevdp[1][1] = 0;
        }

        for(int step = 3; step <= rows + cols; step++) {

            for(int i = 0; i <= rows; i++) {
                for(int j = 0; j <= rows; j++) {
                    curdp[i][j] = NEG;
                }
            }

            for(int x1 = 1; x1 <= rows; x1++) {
                for(int x2 = 1; x2 <= rows; x2++) {

                    int y1 = step - x1;
                    int y2 = step - x2;

                    if(y1 < 1 || y1 > cols) continue;
                    if(y2 < 1 || y2 > cols) continue;

                    if(g[x1][y1] == '#') continue;
                    if(g[x2][y2] == '#') continue;

                    int best = prevdp[x1][x2];

                    if(x1 > 1)
                        best = max(best, prevdp[x1 - 1][x2]);

                    if(x2 > 1)
                        best = max(best, prevdp[x1][x2 - 1]);

                    if(x1 > 1 && x2 > 1)
                        best = max(best, prevdp[x1 - 1][x2 - 1]);

                    if(best == NEG) continue;

                    int gain = 0;

                    if(g[x1][y1] == '*')
                        gain++;

                    if(!(x1 == x2 && y1 == y2)) {
                        if(g[x2][y2] == '*')
                            gain++;
                    }

                    curdp[x1][x2] = best + gain;
                }
            }

            for(int i = 0; i <= rows; i++) {
                for(int j = 0; j <= rows; j++) {
                    prevdp[i][j] = curdp[i][j];
                }
            }
        }

        if(prevdp[rows][rows] < 0)
            cout << 0 << "\n";
        else
            cout << prevdp[rows][rows] << "\n";
    }

    return 0;
}