#include <bits/stdc++.h>
#include <climits>

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

    vector<vector<int>> grid(n, vector<int>(m, 0));
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cin >> grid[i][j];
      }
    }

    const auto valid = [&] (const int x, const int y) -> bool {
      return x >= 0 && x < n && y >= 0 && y < m;
    };
      
    static constexpr pair<int, int> dirs[4] = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
    queue<pair<int, int>> bfs;
    int max_volume{};

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	if (grid[i][j] != 0 && !visited[i][j]) {
	  int temp_volume{};
	  bfs.push({i, j});
	  visited[i][j] = 1;
	  
	  while (!bfs.empty()) {
	    const auto [curr_x, curr_y] = bfs.front();
	    bfs.pop();
	    temp_volume += grid[curr_x][curr_y];
	    visited[curr_x][curr_y] = 1;
	    
	    for (const auto& dir: dirs) {
	      const auto& [dx, dy] = dir;
	      const int new_x = curr_x + dx;
	      const int new_y = curr_y + dy;
	      
	      if (valid(new_x, new_y) && !visited[new_x][new_y] && grid[new_x][new_y] != 0) {
		bfs.push({new_x, new_y});
		visited[new_x][new_y] = 1;
	      }
	    }
	  }
	  
	  max_volume = max(temp_volume, max_volume);
	}
      }
    }
  
    cout << max_volume << endl;
  }
}
