#include <bits/stdc++.h>
using namespace std;

int answer = 0;

vector<vector<int>> board = {
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 },
      { 0, 0, 0 ,0, 0, 0, 0 ,0 }
    };

bool canMove(const size_t row, const size_t column) {
    
    int i, j = 0;
    // check current row on left side
    for(i = 0; i < column; i++)
        if(board[row][i]) return false;
    
    // check upper diagonal on left side
    for(i = row, j = column; i >= 0 && j >= 0; i--, j--)
        if(board[i][j]) return false;

    // check lower diagonal on left side
    for(i = row, j = column; i < board.size() && j >= 0; i++, j--)
        if(board[i][j]) return false;

    return true;
}

void solve(const size_t column) {
    if(column >= board.size()) {
        answer++;
        return;
    }

    for(int x = 0; x < board.size(); x++) {
        if(!canMove(x, column)) continue;
        board[x][column] = 1;
        solve(column + 1);
        board[x][column] = 0; // backtrack
    }
}

int n = 0;
vector<int> diag1;
vector<int> diag2;
vector<int> column;

void solve2(const int& y) {
    if(n == y) {
        answer++;
        return;
    }
    for(int x = 0; x < n; x++) {
        if(column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        solve2(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main()
{
    n = 8;
    diag1.resize(n*n);
    diag2.resize(n*n);
    column.resize(n*n);

    solve2(0);    
    cout << "answer: " << answer << "\n";
    return 0;
}