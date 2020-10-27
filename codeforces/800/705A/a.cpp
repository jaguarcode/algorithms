#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	string s = "";
	for(int x = 0; x < n; x++) {
		if(x % 2) s += "I love ";
		else s += "I hate ";
		
		if(x < n - 1) s += "that "; 
		else s += "it";
	}
	cout << s << "\n";
}
