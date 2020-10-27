/**
 * 	author: jaguarcode
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	string s = to_string(n);
	for(auto c : s) {
		if(0 < c && c > 10 && c != '-') {
			cout << c << " ";
		}
	}
	puts("");
	
	return 0;
}
