/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

vector<int> a = {6,2,5,1,7,4,8,3};
int n = 8;
vector<int> length;

int length_with_loop() {
	for(int k = 0; k < n; k++) {
		length[k] = 1;
		for(int i = 0; i < k; i++) {
			if(a[i] < a[k])
				length[k] = std::max(length[k], length[i]+1);
		}
	}
	
	int mx = 0;
	for(int i = 0; i < n; i++) 
		mx = std::max(mx, length[i]);

	return mx;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// cin >> n;
	length.resize(n);
	
	int answer = length_with_loop();
	cout << answer << "\n";
	
	return 0;
}
