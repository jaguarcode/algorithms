/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;

const vector<vector<int>> switches = {
    {0, 1, 2},
    {3, 7, 9, 11},
    {4, 10, 14, 15},
    {0, 4, 5, 6, 7},
    {6, 7, 8, 10, 12},
    {0, 2, 14, 15},
    {3, 14, 15},
    {4, 5, 7, 14, 15},
    {1, 2, 3, 4, 5},
    {3, 4, 5, 9, 13}
};

bool correct(const vector<int>& clockList) {
    for(const int& c : clockList)
        if(c != 12) return false;
    return true;
}

int getSwitch(int clock) {
    for(size_t i = 0; i < 10; ++i) {
        for(size_t j = 0; j < switches[i].size(); ++j) {
            if(switches[i][j] == clock) return i;
        }
    }
    return -1;
}

void setClock(const vector<int>& relatedSwitches, vector<int>& clockList, bool delta) {
    for(const auto& s : relatedSwitches) {
        if(delta) clockList[s] += 3;
        else clockList[s] -= 3;
    }
}

int solve(vector<int>& clockList) {
    if(correct(clockList)) return 1;

    int ret = INF;
    for(size_t i = 0; i < clockList.size(); ++i) {
		int s = getSwitch(i);
        vector<int> relatedSwitches = switches[s];
        setClock(relatedSwitches, clockList, true);
        int result = solve(clockList);
        ret = min(ret, result);
        setClock(relatedSwitches, clockList, false);
    }
    return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int c;
    cin >> c;
    while(c--) {
        vector<int> clockList;
        for(int i = 0; i < 16; ++i) {
            int a; 
            cin >> a;
            clockList.push_back(a);
        }
        cout << solve(clockList) << "\n";
    }
	
	return 0;
}
