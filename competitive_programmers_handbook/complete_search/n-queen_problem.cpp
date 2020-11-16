/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

const int n = 4;
int column[n*n], diag1[n*n], diag2[n*n];
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
	
	// n-queen problem
	search(0);
	
	cout << answer << "\n";
	
	return 0;
}
