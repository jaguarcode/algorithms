/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
inline auto print(const T& t) {
	for(const auto& e : t) cout << e << " ";
	cout << "\n";
}

// Method 1. using recursion
vector<int> myVector = {1,2,3,4,5,6,7,8,9};
vector<int> subset;
int n = myVector.size();
void search(int k) {
	if(k == n) {
		// process subset
		print(subset);
	} else {
		search(k+1);
		subset.push_back(myVector[k]);
		search(k+1);
		subset.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	search(0);
	
	return 0;
}
