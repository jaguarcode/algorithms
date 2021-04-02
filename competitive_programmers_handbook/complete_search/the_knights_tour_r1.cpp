#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution;

const int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
const int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

bool solve(size_t x, size_t y, int index, vector<vector<int>>& solution);

void print(const vector<vector<int>>& board) {
    for(const auto& row : board) {
        for(const auto& column : row) {
            cout << " " << std::setw(2) << column << " ";
        }
        cout << "\n";
    }
}

bool canMove(size_t x, size_t y, vector<vector<int>> board) {
    return (x >= 0 && x < board.size() 
         && y >= 0 && y < board[0].size()
         && board[x][y] == -1);
}

bool testcase() {
    solution[0][0] = 0;
    if(solve(0, 0, 1, solution) == false) {
        cout << "there is no solution." << "\n";
        return false;
    } else {
        print(solution);
    }
    return true;
}

bool solve(size_t x, size_t y, int index, vector<vector<int>>& solution) {
    int nextX, nextY;
    if(index == (solution.size() * solution.size()))
        return true;
    
    for(int i = 0; i < 8; i++) {
        nextX = x + xMove[i];
        nextY = y + yMove[i];
        if(canMove(nextX, nextY, solution) == true) {
            solution[nextX][nextY] = index;
            if(solve(nextX, nextY, index+1, solution) == true) return true;
            else solution[nextX][nextY] = -1; // backtrack
        }
    }
    return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int size;
    cin >> size;
    solution.resize(size, vector<int>(size, -1));

    testcase();

    return 0;
}