/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
vector<bool> board, col, diag1, diag2;
const int n = 8;
int cnt = 0;
void search(int y) {
	if(y == n) {
		cnt++;
		return;
	} else {
		for(int x = 0; x < n; x++) {
			if(board[x+(y*n)]) continue;
			if(col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
			col[x] = diag1[x+y] = diag2[x-y+n-1] = true;
			search(y+1);
			col[x] = diag1[x+y] = diag2[x-y+n-1] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	board.resize(n*n);
	col.resize(n);
	diag1.resize(n+n);
	diag2.resize(n+n);
	
	for(int i = 0; i < n*n; i++) {
		char ch; cin >> ch;
		if(ch == '.') board[i] = false;
		else if(ch == '*') board[i] = true;
	}
	
	search(0);
	
	cout << cnt << "\n";
	
	return 0;
}
