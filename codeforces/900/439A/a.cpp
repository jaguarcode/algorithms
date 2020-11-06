/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, d;
	cin >> n >> d;
	
	vector<int> s(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> s[i];
		sum += s[i];
	}
	
	if (sum + 10 * (n - 1) > d) {
        cout << -1 << "\n";
    } else {
        cout << (d - sum) / 5 << "\n";
	}
	
	return 0;
}
