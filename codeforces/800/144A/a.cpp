/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a) {
	int max = abs(a.begin() - max_element(a.begin(), a.end()));
	int min = a.size() - abs(a.begin() - min_element(a.begin(), a.end()));

	cout << "moves: " << max + min << "\n";	
	return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	vector<int> a;
	while(tt--) {
		int n;
		cin >> n;
		a.push_back(n);
	}

	cout << solve(a) << "\n";
	
	return 0;
}
