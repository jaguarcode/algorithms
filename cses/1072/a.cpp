/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int n;
int c = 0;
vector<int> column, diag1, diag2;
void search(int y) {
	if (y == n) {
		c++;
		return;
	}
	for (int x = 0; x < n; x++) {
		if (column[x] || diag1[x+(y+1)+n-1] || diag2[x+(y+1)+n+1]) continue;
		column[x] = diag1[x+(y+1)+n-1] = diag2[x+(y+1)+n+1] = 1;
		search(y+1);
		column[x] = diag1[x+(y+1)+n-1] = diag2[x+(y+1)+n+1] = 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	
	column.resize(n*n);
	diag1.resize(n*n);
	diag2.resize(n*n);
	
	search(0);

	cout << c << "\n";
	
	return 0;
}
