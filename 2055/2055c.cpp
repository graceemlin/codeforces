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

    for (int step = 0, i = 0, j = 0; step < directions.size(); ++step) {
      if (directions[step] == 'D') {
	grid[i][j] = -row_sums[i];
	col_sums[j] += grid[i][j];
	++i;
      } else {
	grid[i][j] = -col_sums[j];
	row_sums[i] += grid[i][j];
	++j;
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
