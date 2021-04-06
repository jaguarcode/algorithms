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

	vector<int> home, away;

	while(n--) {
		int h, a;
		cin >> h >> a;
		home.push_back(h);
		away.push_back(a);
	}

	int count = 0;
	for(auto h : home) {
		for(auto a : away) {
			if(h == a) count++;
		}
	}
	
	cout << count << "\n";
	
	return 0;
}
