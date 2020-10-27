#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, answer = 0;
	scanf("%d", &n);
	for(int x = 0; x < n; ++x) {
		string oper;
		cin >> oper;
		if(oper.find("++") != std::string::npos) {
			answer++;
		} else if(oper.find("--") != std::string::npos) {
			answer--;
		} 
	}
	printf("%d\n", answer);
}
