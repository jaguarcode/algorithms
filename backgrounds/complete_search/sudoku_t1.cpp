/**
 * author: jaguarcode
 * date:
 * 
 * input:
0 3 5 4 6 9 2 7 8
7 8 2 1 0 5 6 0 9
0 6 0 2 7 8 1 3 5
3 2 1 0 4 6 8 9 7
8 0 4 9 1 3 5 0 6
5 9 6 8 2 0 4 1 3
9 1 7 6 5 2 0 8 0
6 0 3 7 0 1 9 5 2
2 5 8 3 9 4 7 6 0
**/
#include <bits/stdc++.h>
using namespace std;

const int SIZE = 9;
bool done = false;
int board[9][9];
vector<pair<int, int>> point;

void print() {
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j)
			cout << board[i][j] << " ";
		cout << endl;
	}
}

bool validation(const int row, const int column, const int num) {
	// check row & column
	for (int i = 0; i < SIZE; i++)
        if (board[row][i] == num) return false;
        else if (board[i][column] == num) return false;

	// check section
	int fromX = (row / 3) * 3, fromY = (column / 3) * 3;
	int toX = fromX + 3, toY = fromY + 3;
	for (int i = fromX; i < toX; ++i)
        for (int j = fromY; j < toY; ++j)
            if (board[i][j] == num) return false;
			
	return true;
}

void solve(int index) {
	if(done) return;
	if(index == point.size()) { 
		if(!done) { print(); done = true; }
    } else {
		int y = point[index].first, x = point[index].second;
		for(int number = 1; number <= SIZE; ++number) {
			if(validation(y, x, number)) {
				board[y][x] = number;
				solve(index+1);
				board[y][x] = 0;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	for(int i = 0; i < SIZE; ++i) {
		for(int j = 0; j < SIZE; ++j) {
			cin >> board[i][j];
			if(board[i][j] == 0) 
				point.push_back(make_pair(i, j));
		}
	}

	solve(0);

	return 0;
}
