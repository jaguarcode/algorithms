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
	
	int x = 1;
	int sum = 0;
	while(x != 0) {
		x = n / 5;
		sum += x;
		n = x;
	}
	
	cout << sum << "\n";
	
	return 0;
}
