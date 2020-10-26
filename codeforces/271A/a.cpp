#include <bits/stdc++.h>
using namespace std;
int main() {
	int y;
	scanf("%d", &y);
	while(true) {
		y++;
		string s = to_string(y);
		set<int> x;
		for(auto c : s) x.insert((int)c);
		if(x.size() == 4) break;
	}
	cout << y << "\n";
}
