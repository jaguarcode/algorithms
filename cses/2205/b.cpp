/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	/*
	 * A Gray code is a list of all 2n bit strings of length n, 
	 * where any two successive strings differ in exactly one bit 
	 * (i.e., their Hamming distance is one).
	 * Your task is to create a Gray code for a given length n.
	 * Example

		Input:
		2

		Output:
		00
		01
		11
		10
	 */
	int n;
	cin >> n;
	
	int count = pow(2, n);
	
	vector<string> pattern = {
		"00", "01", "11", "10",
		"10", "11", "01", "00",
	};
	
	vector<string> result;
	result.resize(count);
	for(int j = 1; j < count/2; j+=2) {
		for(int i = 1; i <= count; i++) {
			//int b = pow(2, i);
			cout << i << " " << j << "\n";
			string c = pattern[i/j + 1];
			result[i-1] += c;
		}
	}
	
	
	for(auto a : result) cout << a << "\n";
	
	
	return 0;
}
