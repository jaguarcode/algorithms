#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int a = s.size();
	int m = 0, c = 0;
	for(int x = 1; x < a; x++) {
		if(s[x-1] == s[x]) c++;
		else {
			if(c > 0) m += c;
			c = 0;
		}
	}
	if(c > 0) m += c;
	printf("%d\n", m);
}
