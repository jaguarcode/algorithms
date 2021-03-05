/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

struct P {
	P(int _x, int _y) { x = _x; y = _y; }
	int x, y;
	bool operator<(const P &p) {
		if(x != p.x) return x < p.x;
		else return y < p.y;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	P p1 {1, 2};
	P p2 {3, 4};
	
	cout << ((p1 < p2) ? "Big" : "Small") << "\n";
	
	return 0;
}
