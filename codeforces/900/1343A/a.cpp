#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		int x = 0;
		for(int k = 2; k < 30; k++) {
			x += a[i] / pow(2, k);
			cout << x << "\n";
			if(x == a[i])
				cout << x << "\n";
		}
	}
	return 0;
}
