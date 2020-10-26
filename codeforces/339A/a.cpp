#include <bits/stdc++.h>
using namespace std;
int main() {
	string input;
	cin >> input;
	
	vector<char> numbers;
	int length = input.size();
	for(int i = 0; i < length; i+=2)
		numbers.push_back(input[i]);

	sort(numbers.begin(), numbers.end());

	for(int i = 0; i < length; i+=2) {
		input[i] = numbers[i/2];
	}
	
	cout << input << "\n";
}
cd ..
