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
	vector<bool> a(n);
	for(int i = 0; i < n-1; i++) {
		int k; cin >> k;
		a[k-1] = true;
	}
	
	for(int i = 0; i < n; i++)
		if(a[i] == false) cout << i+1 << "\n";
	
	return 0;
}
