#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	string r;
	cin >> r;
	int a = 0, d = 0;
	for(auto c : r) {
		if(c == 'A') a++;
		else if(c == 'D') d++;
	}
	if(a > d) cout << "Anton" << "\n";
	else if(a < d) cout << "Danik" << "\n";
	else cout << "Friendship" << "\n";
}
