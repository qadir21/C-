#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
// Function to take multiple 2D matrices as input
// Input pattern: Rows separated by space, Matrices separated by an empty line
vector<vector<vector<int>>> take2DInput() {
    vector<vector<vector<int>>> allMatrices;
    string line;

    while (cin) {
        vector<vector<int>> currentMatrix;
        
        // Read rows until an empty line or end of input
        while (getline(cin, line) && !line.empty()) {
            stringstream ss(line);
            vector<int> row;
            int num;
            while (ss >> num) {
                row.push_back(num);
            }
            if (!row.empty()) currentMatrix.push_back(row);
        }

        if (!currentMatrix.empty()) {
            allMatrices.push_back(currentMatrix);
        } else if (allMatrices.size() > 0) { 
            // Agar ek matrix mil chuki hai aur ab khali line aayi, toh stop
            break; 
        }
    }
    return allMatrices;
}

// Recursive helper with Memoization
int f(vector<vector<int>>& arr, vector<vector<int>>& dp, int i, int j, int m, int n){
    // Base Case 1: Out of bounds or hit an obstacle
    if(i >= m || j >= n || arr[i][j] == 1) return 0;
    
    // Base Case 2: Reached the destination
    if(i == m - 1 && j == n - 1) return 1;
    
    // Step 2: Check Memoization
    if(dp[i][j] != -1) return dp[i][j];
    
    // Step 3: Move Right and Down
    return dp[i][j] = f(arr, dp, i, j + 1, m, n) + f(arr, dp, i + 1, j, m, n);
}

int uniquePathsWithObstacles(vector<vector<int>>& arr) {
    if(arr.empty() || arr[0][0] == 1) return 0;
    int m = arr.size(), n = arr[0].size();
    
    // DP table initialized with -1
    vector<vector<int>> dp(m, vector<int>(n, -1));
    
    return f(arr, dp, 0, 0, m, n);
}

int main() {
    auto matrices = take2DInput(); // Using your input function
    if(!matrices.empty()) {
        cout << uniquePathsWithObstacles(matrices[0]) << endl;
    }
    return 0;
}
