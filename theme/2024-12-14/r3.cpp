#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int m;
  cin >> m;

  vector<string> grid(n);
  for (int i = 0; i < n; ++i) {
    cin >> grid[i];
  }

  pair<int, int> start;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (grid[i][j] == 'S') {
	start = {i, j};
      }
    }
  }

  const auto valid = [&] (const int x, const int y) {
    return (x >= 0 && x < n) && (y >= 0 && y < m);
  };

  static constexpr pair<int, int> dirs[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  static constexpr char commands[4] = {'R', 'D', 'L', 'U',};

  pair<int, int> step = start;
  vector<vector<int>> visited(n, vector<int>(m, 0));

  string result = "";
  bool result_found = false;  
  while (!result_found) {
    const auto& [curr_x, curr_y] = step;
    visited[curr_x][curr_y] = 1;

    for (int i = 0; i < 4; ++i) {
      const auto& [dx, dy] = dirs[i];
      const int new_x = curr_x + dx;
      const int new_y = curr_y + dy;
      const pair<int, int> next_step = {new_x, new_y};
      
      if (next_step == start && result.size() > 1) {
	result_found = true;
	result += commands[i];
	break;
      } else if (next_step == start) {
	continue;
      }
      
      if (valid(new_x, new_y) && grid[new_x][new_y] != '.' && !visited[new_x][new_y]) {
	step = next_step;
	result += commands[i];
	break;
      } 
    }
  }

  cout << result << endl;
}
