/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

long answer = 1e9+7;
void solve(long a, long b, vector<long> p) {
	if(a == (long)p.size()) {
		answer = std::min(answer, abs(b));
		return;
	} else {
		solve(a+1, b+p[a], p);
		solve(a+1, b-p[a], p);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<long> p(n);
	for(int i = 0; i < n; i++) cin >> p[i];

	solve(0, 0, p);
	
	cout << answer << "\n";
	
	return 0;
}
