#include <iostream>
#include <vector>

using namespace std;

// Knight's 8 moves
vector<int> dx{-2, -1, 1, 2, 2, 1, -1, -2};
vector<int> dy{1, 2, 2, 1, -1, -2, -2, -1};

int totalSolutions = 0; // Total count track karne ke liye

void display(vector<vector<int>>& grid, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", grid[i][j]);
        }
        cout << "\n";
    }
    cout << "---------------\n";
}

bool isItSafe(vector<vector<int>>& grid, int i, int j, int n) {
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == -1;
}

void f(vector<vector<int>>& grid, int i, int j, int n, int count) {
    // Base Case: Agar saare cells fill ho gaye
    if (count == n * n - 1) {
        totalSolutions++;
        display(grid, n);
        return;
    }

    for (int k = 0; k < 8; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];

        if (isItSafe(grid, ni, nj, n)) {
            grid[ni][nj] = count + 1; // Move mark karo
            f(grid, ni, nj, n, count + 1); // Agla step
            grid[ni][nj] = -1; // Backtrack (Rasta khali karo doosre combination ke liye)
        }
    }
}

void knightsTour(int n, int r, int c) {
    vector<vector<int>> grid(n, vector<int>(n, -1));
    totalSolutions = 0;
    
    grid[r][c] = 0; // Start position
    f(grid, r, c, n, 0);
    
    if(totalSolutions == 0) {
        cout << "No paths found!\n";
    } else {
        cout << "Total possible paths: " << totalSolutions << endl;
    }
}

int main() {
    // Note: 5x5 grid ke liye bhi bahut saare solutions nikalenge (304 combinations for 0,0)
    // 8x8 grid par 'all paths' chalana slow ho sakta hai
    knightsTour(5, 0, 0);
    return 0;
}
