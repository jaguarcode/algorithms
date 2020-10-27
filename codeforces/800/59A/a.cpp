#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a = 0, b = 0;
	for(auto c : s) {
		if(c < 97) a++;
		else b++;
	}
	
	int c = s.size();
	if(a > b) {
		for(int i = 0; i < c; i++) {
			if(s[i] >= 97)
				s[i] -= 32;
		}
	} else {
		for(int i = 0; i < c; i++) {
			if(s[i] < 97)
				s[i] += 32;
		}
	}
	
	cout << s << "\n";
}
