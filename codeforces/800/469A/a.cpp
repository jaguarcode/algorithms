#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	set<int> s;
	
	int p;
	scanf("%d", &p);
	
	for(int i = 0; i < p; i++) {
		int x;
		scanf("%d", &x);
		s.insert(x);
	}
	
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		int x;
		scanf("%d", &x);
		s.insert(x);
	}
	
	if(s.size() == (size_t)n) cout << "I become the guy." << "\n";
	else cout << "Oh, my keyboard!" << "\n";
}
