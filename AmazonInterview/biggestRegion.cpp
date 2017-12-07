#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int nextRegion(vector< vector<int> > &a, int i, int j, int n, int m){
	if (i >= n || i<0 || j>=m || j < 0)
		return 0;
	if (a[i][j] == 0)
		return 0;

	int count = 1;
	a[i][j] = 0;
	count += nextRegion(a, i + 1, j + 1, n, m);
	count += nextRegion(a, i - 1, j - 1, n, m);
	count += nextRegion(a, i - 1, j, n, m);
	count += nextRegion(a, i + 1, j, n, m);
	count += nextRegion(a, i, j - 1, n, m);
	count += nextRegion(a, i, j + 1, n, m);
	count += nextRegion(a, i - 1, j + 1, n, m);
	count += nextRegion(a, i + 1, j - 1, n, m);

	return count;
}


int get_biggest_region(vector< vector<int> > grid, int n, int m) {
	int big = INT_MIN;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(grid[i][j] == 1)
				big = max(big, nextRegion(grid, i, j, n, m));
		}
	}
	return big;
}

int main21(){
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector< vector<int> > grid(n,vector<int>(m));
	for(int grid_i = 0;grid_i < n;grid_i++){
		for(int grid_j = 0;grid_j < m;grid_j++){
			cin >> grid[grid_i][grid_j];
		}
	}
	cout << get_biggest_region(grid, n, m) << endl;
	return 0;
}
