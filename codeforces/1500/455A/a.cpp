/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

// n (1 ≤ n ≤ 1e5)

long long values[100002], answer[100002];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;

	while(n--) {
		int value;
		cin >> value;
		values[value]++;
	}

	answer[0] = 0;
	answer[1] = values[1] * 1;
	for(int i = 2; i <= 100000; i++)
		answer[i] = max(answer[i-1], answer[i-2] + values[i] * i);

	cout << answer[100000] << "\n";

	return 0;
}
