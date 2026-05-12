#include<iostream>
#include<vector>
using namespace std;

vector<vector<char>> grid;
vector<vector<string>> result;

bool canPlace(int row, int col, int n){
    // column check
    for(int i = row - 1; i >= 0; i--){
        if(grid[i][col] == 'Q') return false; // we are attacked
    }
    // left diagonal check
    for(int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--){
        if(grid[i][j] == 'Q') return false; // we are attacked
    }
    // right diagonal check
    for(int i = row - 1, j = col + 1; i >= 0 and j < n; i--, j++){
        if(grid[i][j] == 'Q') return false; // we are attacked
    }
    return true;
}

void f(int row, int n){
    if(row == n){
        // we got one possible ans
        vector<string> temp;
        for(int i = 0; i < n; i++){
            string res = "";
            for(int j = 0; j < n; j++) res += grid[i][j]; 
            temp.push_back(res);  
        }
        result.push_back(temp);
        return;
    }
    for(int col = 0; col < n; col++){
        if(canPlace(row, col, n)){
            grid[row][col] = 'Q';
            f(row + 1, n);
            grid[row][col] = '.';
        }
    }
}

vector<vector<string>> nQueen(int n){
    grid.clear();
    result.clear();
    grid.resize(n, vector<char> (n, '.'));
    f(0, n);
    return result;
}

int main(){
    int n;
    cin >> n;
    nQueen(n);
    return 0;
}