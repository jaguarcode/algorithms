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
	vector<int> p;
	p.resize(n);
	for(int i = 0; i < n; i++) {
		cin >> p[i];
	}
	
	int mx = 0;
	for(int i = 0; i < n; i++) {
		int depth = 1;
		if(p[i] != -1) {
			int index = i;
			while(p[index] != -1) {
				index = p[index] - 1;
				depth++;
			}
		}
		mx = std::max(mx, depth);
	}
	
	cout << mx << "\n";
	
	return 0;
}
