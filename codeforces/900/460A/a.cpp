/**
 * 	author: jaguarcode
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int d = 0;
	while(n--) {
		d++;
		if(d % m == 0) {
			n++;
		}
	}
	cout << d << "\n";
	
	return 0;
}
