/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int correct(vector<int> answer, vector<int> pattern) {
	int cnt = 0;
	for(int i = 0; i < answer.size(); i++) {
		if(answer[i] == pattern[i % pattern.size()]) cnt++;
	}
	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<vector<int> patterns = {
		{1,2,3,4,5},
		{2,1,2,3,2,4,2,5},
		{3,3,1,1,2,2,4,4,5,5}
	};

	int n;
	vector<int> a;
	while(cin >> n) {
		a.push_back(n);
	}
	
	for(int i = 0; i < patterns.size(); i++) {
		int cnt = correct(answer, patterns[i]);
		
	}
	
	cout << a.size() << "\n";

	return 0;
}
