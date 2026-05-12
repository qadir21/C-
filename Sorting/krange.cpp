#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int kmin = INT_MIN;
    int kmax = INT_MAX;

    for(int i = 0; i < n - 1; i++) {
        int a = arr[i];
        int b = arr[i + 1];

        int mid = (a + b) / 2;

        if(a < b) {
            kmax = min(kmax, mid); // floor((a + b) / 2)
        }
        else if(a > b) {
            // ceil((a + b)/2) = (a + b + 1) / 2
            kmin = max(kmin, (a + b + 1) / 2);
        }

        if(kmin > kmax) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << kmin << " " << kmax << endl;
    return 0;
}