/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int answer = 0;
	
	vector<int> v3;
    while(n/3 >= 3) {
        v3.push_back(n%3);
        n = n/3;
    }
    v3.push_back(n%3);
    v3.push_back(n/3);
    
    answer = v3.back();
    v3.pop_back();
    int index = 1;
    while(v3.size()) {
		answer += (v3.back() * (pow(3, index)));
		index++;
		v3.pop_back();
	}
    
	cout << answer << "\n";
	
	return 0;
}
