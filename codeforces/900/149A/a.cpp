/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin >> k;
	const int M = 12;
	int tt = 12;
	vector<int> y(M);
	while(tt--)
		scanf("%d", &y[(tt+1)%M]);
	sort(y.begin(), y.end(), greater<int>());
	int a = 0;
	while(k > 0) {
		k -= y[a];
		a++;
	}
	cout << a << "\n";
	return 0;
}
