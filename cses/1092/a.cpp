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
	int sum = 0;
	for(int i = 0; i < n; i++) sum += (i+1);
	
	if(sum % 2 == 0) cout << "YES" << "\n";
	else cout << "NO" << "\n";
	
	int mid = n / 2;
	if(sum % 2 == 0) {
		cout << mid << "\n";
		bool b = true;
		int a = n;
		while(a > 0) {
			cout << a << " ";
			if(b) {
				a -= 3;
				b = !b;
			} else {
				a -= 1;
				b = !b;
			}
		}
		cout << "\n";
		cout << n - mid << "\n";
		b = false;
		a = n - 1;
		while(a > 0) {
			cout << a << " ";
			if(b) {
				a -= 3;
				b = !b;
			} else {
				a -= 1;
				b = !b;
			}
		}
		cout << "\n";
	}
	
	return 0;
}
