#include <bits/stdc++.h>
#include <climits>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;

    string directions = "";
    cin >> directions;

    vector<vector<int64_t>> grid (n, vector<int64_t>(m, 0));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cin >> grid[i][j];
      }
    }

    vector<int64_t> row_sums(n, 0);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	row_sums[i] += grid[i][j];
      }
    }
    
    vector<int64_t> col_sums(m, 0);
    for (int j = 0; j < m; ++j) {
      for (int i = 0; i < n; ++i) {
	col_sums[j] += grid[i][j];
      }
    }

    int curr_y = 0;
    int curr_x = 0;
    for (int step = 0; step < n + m - 2; ++step) {
      if (directions[step] == 'D') {
	grid[curr_y][curr_x] = -row_sums[curr_y];
	col_sums[curr_x] += grid[curr_y][curr_x];
	++curr_y;
      } else {
	grid[curr_y][curr_x] = -col_sums[curr_x];
	row_sums[curr_y] += grid[curr_y][curr_x];
	++curr_x;
      }
    }

    grid[n - 1][m - 1] = -row_sums[n - 1];
    
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cout << grid[i][j] << ' ';
      }
      cout << endl;
    }
  }
}
