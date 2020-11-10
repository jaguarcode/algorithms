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
	
	unsigned long long x = 1;
	unsigned long long m = 2147483647;
	for(int i = n; i > 0; i--) x = (long long)x*i % m;
	
	int a = 0;
	string s = to_string(x);
	size_t l = s.size();
	while(l-- && s[l] == '0') a++;

	cout << s << "\n";
	cout << a << "\n";
	
	return 0;
}
