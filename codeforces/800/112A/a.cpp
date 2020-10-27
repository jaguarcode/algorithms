#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	transform(b.begin(), b.end(), b.begin(), ::toupper);
	int value = a.compare(b);
	if (value != 0) value = (value > 0) ? 1 : -1;
	printf("%d\n", value);
}
