/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// input
	string s;
	cin >> s;

	// counting characters
	int a[25] = {0};
	for(size_t i = 0; i < s.size(); i++)
		a[(int)s[i] % 65]++;
	
	// locating characters (odd and evens)
	string result = s;
	int index = 0;
	for(int i = 0; i < 25; i++) {
		if(a[i] == 0) continue;
		int ch = i + 65;
		if(a[i] % 2 == 0) {
			for(int j = 0; j < a[i]/2; j++) {
				result[index + j] = ch;
				result[(s.size() - 1) - (index + j)] = ch;
			}
			index += a[i]/2;
		} else {
			int mid = result.size()/2;
			result[mid] = ch;
			if(a[i]/2 > 0)
				for(int j = 0; j < a[i]/2; j++) {
					result[mid-j-1] = ch;
					result[mid+j+1] = ch;
				}
			
		}
	}
	
	// check validation
	bool b = true;
	int l = 0, r = result.size() - 1;
	while((r - l) > 1) {
		if(result[r] != result[l]) {
	//		b = false;
			break;
		}
		l += 1; r -= 1;
	}
	
	// output
	if(b) cout << result << "\n";
	else cout << "NO SOLUTION" << "\n";
	
	return 0;
}
