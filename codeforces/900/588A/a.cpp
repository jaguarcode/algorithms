/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n), p(n);
	for(int i = 0; i < n; i++) cin >> a[i] >> p[i];
	
	int sum = 0, min = 1e9+7;
	for(int x = 0; x < n; x++) {
		min = std::min(min, p[x]);
		sum += (a[x] * min);
	}

	cout << sum << "\n";
	
	return 0;
}
