/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
auto print(T& t) {
	for(auto value : t) cout << value << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int> v { 2,3,4,5,6,2,1,8,2,3,6,9 };
	int n = v.size();
	int x;
	cin >> x;
	
	sort(v.begin(), v.end());
	
	int k = 0;
	for(int b = n/2; b >= 1; b /= 2) {
		while(k+b < n && v[k+b] <= x) k += b;
	}
	
	if(v[k] == x) cout << "Found!" << "\n";
	
	return 0;
}
