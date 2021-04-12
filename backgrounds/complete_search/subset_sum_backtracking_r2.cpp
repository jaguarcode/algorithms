/**
 * Subset Sum Problem
 * Ref: https://greatzzo.tistory.com/39
 * */

#include <bits/stdc++.h>
using namespace std;

bool hasSubsetSum(vector<int> array, size_t size, int sum) {
    if(sum == 0) return true;
    if(size == 0 && sum != 0) return false;

    if(array[size-1] > sum) return hasSubsetSum(array, size-1, sum);

    return hasSubsetSum(array, size-1, sum)
            || hasSubsetSum(array, size-1, sum - array[size-1]);
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    vector<int> a { 3, 24, 4, 12, 5, 2 };
    int sum = 13;

    if(hasSubsetSum(a, a.size(), sum) == true) {
        cout << "Yes, There has solution." << "\n";
    } else {
        cout << "No, There is no solution." << "\n";
    }

    return 0;
}