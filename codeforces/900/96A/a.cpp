#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int l = s.length(), max = 0, c = 1;
	bool f = false;
	for(int x = 1; x < l; x++) {
		if(s[x - 1] == s[x]) f = true;
		else f = false;
		
		if(f) {
			c++;
			max = std::max(max, c);
		} else c = 1;
	}
	if(max >= 7) printf("YES\n"); else printf("NO\n");
}
