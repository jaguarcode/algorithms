/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> result;
long cnt = 0;

void move(int from, int to) {
	result.push_back(pair(from,to));
	cnt++;
}

void hanoi(int n, int from, int via, int to) {
	if(n == 1)
		move(from, to);
	else {
		hanoi(n-1, from, to, via);
		move(from, to);
		hanoi(n-1, via, from, to);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	hanoi(n, 1, 2, 3);
	
	cout << cnt << "\n";
	for(auto r : result) 
		cout << r.first << " " << r.second << "\n";
	
	return 0;
}
