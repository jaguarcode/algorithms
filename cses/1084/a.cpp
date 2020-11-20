/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> b(m);
	for(int i = 0; i < m; i++) cin >> b[i];
	
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end());
	
	int answer = 0;
	while(b.size() != 0) {
		int v = b[b.size()-1];
		int mn = v - k, mx = v + k;
		if(a[answer] >= mn && a[answer] <= mx) { answer++; }		
		b.pop_back();
	}
	
	cout << answer << "\n";
	
	return 0;
}
