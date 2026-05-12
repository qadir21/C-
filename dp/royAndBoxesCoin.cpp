#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> f(n + 10, 0);

    for(int i = 0; i < m ; i++){
        int L, R;
        cin >> L >> R;
        f[L]++;
        f[R + 1]--;
    }

    for(int i = 1; i < f.size(); i++){
        f[i] = f[i] + f[i - 1];
    }

    vector<int> c(10000005, 0);
    for(int i = 1; i <= n; i++){
        c[f[i]]++;
    }

    for(int i = m - 1; i >= 0; i--){
        c[i] += c[i + 1];
    }

    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;

        if(x > m) cout << 0 << endl;
        else cout << c[x] << endl;
    }

    return 0;
}