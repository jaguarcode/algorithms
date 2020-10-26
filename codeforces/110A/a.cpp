#include <bits/stdc++.h>
using namespace std;
int main() {
	long long number;
	cin >> number;
	
	string s;
	s = to_string(number);
	
	int a = 0;
	for(auto c : s) {
		if(c == '4' || c == '7') a++;
	}
	
	if(a == 4 || a == 7) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
