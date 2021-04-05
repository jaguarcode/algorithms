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
	
	int cnt = pow(2, n);
	vector<string> p = { "0", "1", "1", "0" };
	
	vector<string> v(cnt);
	int r = pow(2, n-1);
	
	for(int i = n; i > 0; i--) {
		for(size_t j = 0; j < v.size(); j++) {
			string& c = v[j];
			c += p[(j/r)%p.size()];
		}
		r /= 2;
	}
	
	for(auto a : v) cout << a << "\n";
	
	return 0;
}
