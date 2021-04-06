/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int a, b, c, value[4001];

int f(int x) {
	if(x == 0) return 0;
	if(x < 0 || (x > 0 && x < a && x < b && x < c)) return -1e9+7;
	if(!value[x]) 
		value[x] = max(f(x-a), max(f(x-b), f(x-c))) + 1;
	return value[x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n >> a >> b >> c;

	cout << f(n) << "\n";
	
	return 0;
}