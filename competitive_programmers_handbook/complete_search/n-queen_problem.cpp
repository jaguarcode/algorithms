/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int n = 0;
vector<int> column, diag1, diag2;
int answer = 0;

void search(int y) {
	if(y == n) {
		answer++;
		return;
	}
	for(int x = 0; x < n; x++) {
		if(column[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
		search(y + 1);
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	
	column.resize(n*n);
	diag1.resize(n*n);
	diag2.resize(n*n);
	
	// n-queen problem
	search(0);
	
	cout << answer << "\n";
	
	return 0;
}
