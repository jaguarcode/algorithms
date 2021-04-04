/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
auto print(const T& t) {
	for(auto v : t) cout << v << " ";
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int b = 0; b < (1<<n); b++) {
		vector<int> subset;
		for(int i = 0; i < n; i++) {
			if(b & (1 << i)) subset.push_back(i);
		}
		print(subset);
	}
	
	
	
	return 0;
}
