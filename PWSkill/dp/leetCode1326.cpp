/*
Ye problem "Minimum Number of Taps to Open to Water a Garden"

Garden range = [0 ... n]

Har tap i ka range diya hai:

[i - ranges[i], i + ranges[i]]

Matlab tap i kholne par itna area water hoga.

Hume minimum taps kholkar
poora garden cover karna hai.

--------------------------------------------------

Best Approach:

Ye interval covering / greedy problem hai.

Hum har tap ko interval maanenge.

Phir minimum intervals se [0...n]
cover karenge.

--------------------------------------------------

Step 1:

maxReach[start] store karega:

agar kisi interval ka start = start hai,
toh waha se maximum kitna right tak ja sakte hain.

--------------------------------------------------

Step 2:

Jump Game II jaisa greedy use karenge.

currentEnd = abhi tak covered area
farthest   = next maximum cover
taps       = opened taps count

--------------------------------------------------

Jab i currentEnd tak pahunch jaaye,
tab ek naya tap lena padega.

--------------------------------------------------

Example:

n = 5
ranges = [3,4,1,1,0,0]

Tap 1 covers [0,5]

Answer = 1

--------------------------------------------------

Time Complexity:

O(n)

Space Complexity:

O(n)

--------------------------------------------------

Tumhare code me mistakes:

1. dp[0] - 0;   (assignment galat)
2. INT_MAX include nahi
3. dp logic wrong
4. return dp[n] = INT_MAX ? ...
   comparison ki jagah assignment
5. interval DP incorrect

--------------------------------------------------
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minTaps(int n, vector<int>& ranges) {

    vector<int> maxReach(n + 1, 0);

    for(int i = 0; i <= n; i++) {

        int left  = max(0, i - ranges[i]);
        int right = min(n, i + ranges[i]);

        /*
        Important Clue:

        left se start hone par
        sabse door right store karo
        */
        maxReach[left] = max(maxReach[left], right);
    }

    int taps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for(int i = 0; i <= n; i++) {

        /*
        Important Clue:

        Agar current point cover hi nahi hua
        */
        if(i > farthest) return -1;

        farthest = max(farthest, maxReach[i]);

        /*
        Important Clue:

        Current coverage end ho gaya
        naya tap lena padega
        */
        if(i == currentEnd) {

            if(i != n)
                taps++;

            currentEnd = farthest;
        }
    }

    return taps;
}

int main() {

    int n;
    cin >> n;

    vector<int> ranges(n + 1);

    for(int i = 0; i <= n; i++) {
        cin >> ranges[i];
    }
    
    cout << minTaps(n, ranges) << endl;

    return 0;
}