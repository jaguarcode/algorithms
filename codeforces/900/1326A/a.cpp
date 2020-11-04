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
	vector<int> a(n);
	int x = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] += x;
		x = max(x, a[i]);
		cout << a[i] << " ";		
	}
	cout << "\n";

	return 0;
}
