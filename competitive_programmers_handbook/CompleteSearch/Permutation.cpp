/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
inline auto print(const T& t) {
	for(auto e : t) cout << e << " ";
	cout << "\n";
}

vector<int> myVector = {1,2,3,4};
const int n = 4;
vector<int> permutation;
bool chosen[n] = {false};
void search() {
	if(permutation.size() == (size_t)n) {
		print(permutation);
	} else {
		for(int i = 0; i < n; i++) {
			if(chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(myVector[i]);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	search();
	
	return 0;
}
