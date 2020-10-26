#include <bits/stdc++.h>
using namespace std;
int main() {
	int rows[5][5], x = 0, y = 0;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			scanf("%d", &rows[i][j]);
			if(rows[i][j] == 1) {
				x = i + 1; y = j + 1;
			}
		}
	}
	
	printf("%d\n", abs(3 - x) + abs(3 - y));
}
