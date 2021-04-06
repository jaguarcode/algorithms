/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
vector<int> dollars = {100, 20, 10, 5, 1};

int solve(int n) {
	int count = 0;
	for(auto d : dollars) {
		if(n / d > 0) {
			count += n / d;
			n %= d;
		}
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;

	cout << solve(n) << "\n";
	
	return 0;
}
