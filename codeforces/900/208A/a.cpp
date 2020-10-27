#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int flag = 1, l = s.size();
	for(int i = 0; i < l; i++) {
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			i += 2;
			if(!flag) { cout << " "; flag = 1; }
			continue;
		} else {
			flag = 0;
			cout << s[i];
		}
	}
	puts("");
}
