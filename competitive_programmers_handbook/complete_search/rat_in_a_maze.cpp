/**
 * author: jaguarcode
 * date:
 * 
 * ref: https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/
 * 
**/
#include <bits/stdc++.h>
using namespace std;

#define GRID vector<vector<int>>

bool solveMaze(const GRID& maze, size_t x, size_t y, GRID& sol);

void printSolution(const GRID& sol) {
	for(size_t i = 0; i < sol.size(); i++) {
		for(size_t j = 0; j < sol[0].size(); j++) {
			printf(" %d ", sol[i][j]);
		}
		printf("\n");
	}
}

bool isSafe(const GRID& maze, size_t x, size_t y) {
	if(x >= 0 && x < maze.size() && y >= 0 && y < maze[0].size() 
		&& maze[x][y] == 1) return true;
	return false;
}

bool solveMaze(const GRID& maze, size_t x, size_t y, GRID& sol) {
	if(x == maze.size()-1 && y == maze[0].size()-1 && maze[x][y] == 1) {
		sol[x][y] = 1;
		return true;
	}
	
	if(isSafe(maze, x, y) == true) {
		if(sol[x][y] == 1) return false; // check CSP
		sol[x][y] = 1; // mark as approach
		// call function recursively
		if(solveMaze(maze, x+1, y, sol) == true) return true;
		if(solveMaze(maze, x, y+1, sol) == true) return true;
		if(solveMaze(maze, x-1, y, sol) == true) return true;
		if(solveMaze(maze, x, y-1, sol) == true) return true;
		sol[x][y] = 0; // mark as not approach
		return false;
	}
	return false;
}

int main()
{
	GRID maze = {
		{1, 0, 0, 0},
		{1, 1, 0, 1},
		{0, 1, 0, 0},
		{1, 1, 1, 1}};
	
	GRID sol = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}};
	
	if(solveMaze(maze, 0, 0, sol) == false) {
		printf("solution doesn't exist.");
	} else {
		printSolution(sol);
	}
	
	return 0;
}
