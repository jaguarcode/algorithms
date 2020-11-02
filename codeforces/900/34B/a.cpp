/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;	
	vector<int> prices;
	prices.resize(n);
	for(int i = 0; i < n; i++) cin >> prices[i];
	
	sort(prices.begin(), prices.end());
	
	int sum = 0;
	for(int i = 0; i < m; i++) sum += abs((prices[i] < 0) ? prices[i] : 0);
	cout << sum << "\n";
	
	return 0;
}
