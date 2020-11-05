/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	const int n = 5;
	int a = 0, b = 0;
	int color[n][n] = {
		{0,1,0,0,1},
		{0,1,1,0,0},
		{1,0,0,0,0},
		{0,1,1,0,1},
		{0,0,0,0,0}
	};
	
	// method #1 O(n^3) time
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(color[a][i] == 1 && color[b][i] == 1) count++;
	}
	
	cout << count << "\n";
	
	// method #2 O(n^3/N) time
	const int N = 1;
	count = 0;
	for(int i = 0; i < n/N; i++) {
		count += __builtin_popcount(color[a][i]&color[b][i]);
	}
	
	cout << count << "\n";
	
	return 0;
}
