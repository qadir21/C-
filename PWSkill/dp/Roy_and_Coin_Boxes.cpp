#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;
    
    // 1. Difference Array to handle range updates efficiently
    vector<int> diff(n + 2, 0);
    for (int i = 0; i < m; i++) {
        int L, R;
        cin >> L >> R;
        diff[L]++;
        diff[R + 1]--;
    }

    // 2. Prefix Sum to find how many ranges cover each point i
    vector<int> overlaps(n + 1, 0);
    int current = 0;
    int max_overlap = 0;
    for (int i = 1; i <= n; i++) {
        current += diff[i];
        overlaps[i] = current;
        if (current > max_overlap) max_overlap = current;
    }

    // 3. Count how many points have exactly 'x' overlaps
    // Size is max_overlap + 2 to avoid out of bounds
    vector<int> freq(m + 2, 0); 
    for (int i = 1; i <= n; i++) {
        if (overlaps[i] >= 0) freq[overlaps[i]]++;
    }

    // 4. Suffix Sum to answer "at least x" queries
    // freq[i] now means points covered by at least 'i' ranges
    for (int i = m; i >= 0; i--) {
        freq[i] += freq[i + 1];
    }

    // 5. Answer Queries
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (x > m) cout << 0 << endl; // Cannot be covered by more than m ranges
        else cout << freq[x] << endl;
    }

    return 0;
}
