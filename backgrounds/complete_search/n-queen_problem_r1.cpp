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

int main()
{
    solve(0);
    cout << "answer: " << answer << "\n";
    return 0;
}