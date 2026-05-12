#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iomanip>
using namespace std;

int ans;

bool canWeGo(vector<vector<int>>& grid, int n, int i, int j){
    return i >= 0 and j >= 0 and i < n and j < n and grid[i][j] == 0;
}
void f(vector<vector<int>>& grid, int n, int i, int j){
    if(i == n - 1 and j == n - 1){
        ans += 1;
        return; // base case
    }
    grid[i][j] = 2; // 2 maens visited

    // left
    if(canWeGo(grid, n, i, j - 1)){
        f(grid, n, i, j - 1);
    }

    // right
    if(canWeGo(grid, n, i, j + 1)){
        f(grid, n, i, j + 1);
    }

    // up 
    if(canWeGo(grid, n, i - 1, j)){
        f(grid, n, i - 1, j);
    }

    // down
    if(canWeGo(grid, n, i + 1, j)){
        f(grid, n, i + 1, j);
    }

    grid[i][j] = 0;

}

int ratInMaze(vector<vector<int>>& grid, int n) {
    ans = 0;
    if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return 0; // Check start and end
    f(grid, n, 0, 0);
    return ans;      
}

vector<vector<int>> input(int n){
    vector<vector<int>> temp;
    for(int i = 0; i < n; i++){
        vector<int> x;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            x.push_back(a);

        }
        temp.push_back(x);
    }
    return temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> grid = input(n);
    cout << ratInMaze(grid, n) << "\n";
    return 0;
}