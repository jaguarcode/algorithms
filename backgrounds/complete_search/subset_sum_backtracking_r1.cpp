#include <bits/stdc++.h>
using namespace std;

static int total_nodes;

void printSubset(int a[], int size) {
    for(int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void subsetSum(int s[], int t[], size_t s_size, size_t t_size,
    int sum, int ite, const int target_sum) {
    total_nodes++;
    if(target_sum == sum) {
        printSubset(t, t_size);
        subsetSum(s, t, s_size, t_size-1, sum-s[ite], ite+1, target_sum);
        return;
    } else {
        for(int i = ite; i < s_size; i++) {
            t[t_size] = s[i];
            subsetSum(s, t, s_size, t_size+1, sum+s[i], i+1, target_sum);
        }
    }
}

void generateSubsets(int s[], int size, int target_num) {
    int *tuple_vector = new int[200];
    subsetSum(s, tuple_vector, size, 0, 0, 0, target_num);
    free(tuple_vector);
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int weights[] = { 10, 7, 5, 18, 12, 20, 15 };
    int size = sizeof(weights) / sizeof(weights[0]);

    generateSubsets(weights, size, 35);

    cout << "Nodes generated " << total_nodes << "\n";

    return 0;
}