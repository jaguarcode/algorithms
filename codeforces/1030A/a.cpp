#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	bitset<100> b = {0};
	for(int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if(a == 1) b.set(i);
	}
	if(b.any()) cout << "HARD" << "\n";
	else cout << "EASY" << "\n";
}
