#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> solution) {
    for(auto x : solution) {
        for(auto y : x) {
            cout << " " << y << " ";
        }
        cout << "\n";
    }
}

bool canMove(const vector<vector<int>>& maze, size_t x, size_t y) {
    if(x >= 0 && x < maze.size() 
        && y >= 0 && y < maze[0].size() 
        && maze[x][y] == 1) 
        return true;
    else
        return false;
}

// backtracking
bool solveMaze(const vector<vector<int>>& maze, size_t x, size_t y, vector<vector<int>>& solution) {
    // 1. check base condition
    if(x == maze.size()-1 && y == maze.size()-1 && maze[x][y] == 1) {
        solution[x][y] = 1;
        return true;
    }
    
    // 2. check Constraints Satification Problems (CSP)
    if(canMove(maze, x, y) == true && solution[x][y] != 1) {
        // 3. mark as approach
        solution[x][y] = 1;
        // 4. move recursively (call function)
        if(solveMaze(maze, x+1, y, solution) == true) return true;
        if(solveMaze(maze, x-1, y, solution) == true) return true;
        if(solveMaze(maze, x, y+1, solution) == true) return true;
        if(solveMaze(maze, x, y-1, solution) == true) return true;
        // 5. mark as not approach (backtracking)
        solution[x][y] = 0;
    }
    return false;
}

int main()
{
    vector<vector<int>> maze = {
        { 1, 0, 0, 0 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 0 },
        { 1, 1, 1, 1 }
    };

    vector<vector<int>> solution = {
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 }
    };

    if(solveMaze(maze, 0, 0, solution) == false) {
        cout << "there is no way out." << "\n";
    } else {
        print(solution);
    }

    return 0;
}