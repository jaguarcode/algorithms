/**
 * 	author: jaguarcode
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, a, b;
		cin >> n >> a >> b;	
		char buff[n+1];
		int start = 97;
		for(int i = 0; i < n; i++) buff[i] = start + (i % b);
		buff[n] = '\0';
		cout << buff << "\n";
	}
	return 0;
}
