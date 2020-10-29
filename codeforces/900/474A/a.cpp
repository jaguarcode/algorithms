/**
 * author: jaguarcode
 * date: 29.10.2020 08H53M30S
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	char c;
	cin >> c;
	string input;
	cin >> input;
	
	int m = input.length();
	string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
	int n = k.length();
	
	for(int x = 0; x < m; x++) {
		for(int y = 0; y < n; y++) {
			if(k[y] == input[x]) {
				if(c == 'R') cout << k[y-1];
				else cout << k[y+1];
			}
		}
	}
	return 0;
}
