#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int pw = 2; pw < 30; ++pw) {
			int v = (1 << pw) - 1;
			if(n % v == 0) {
				cout << n / v << "\n";
				break;
			}
		}
	}
	return 0;
}
