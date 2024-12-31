#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
    
  int ax;
  cin >> ax;
  int ay;
  cin >> ay;

  int bx;
  cin >> bx;
  int by;
  cin >> by;

  int cx;
  cin >> cx;
  int cy;
  cin >> cy;

  vector<vector<int>> visited(n + 1, vector<int>(n + 1, 0));
  for (int i = 1; i <= n; ++i) {
    visited[ax][i] = 1;
    visited[i][ay] = 1;
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i - j == ax - ay || j - i == ay - ax) {
        visited[i][j] = 1;
      }
    }
  }

  static constexpr pair<int, int> dirs[8] = {{0, -1}, {1, 0}, {-1, 0}, {0, 1},
					     {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
  queue<pair<int, int>> bfs;
  bfs.push({bx, by});
  visited[bx][by] = 1;
  
  const auto valid = [&] (const int x, const int y) -> bool {
    return x >= 1 && x <= n && y >= 1 && y <= n;
  };

  bool found = false;
  while (!bfs.empty()) {
    const auto [curr_x, curr_y] = bfs.front();
    bfs.pop();
    
    if (curr_x == cx && curr_y == cy) {
      found = true;
      break;
    }
    
    for (const auto& dir: dirs) {
      const auto& [dx, dy] = dir;
      const int new_x = curr_x + dx;
      const int new_y = curr_y + dy;
      if (valid(new_x, new_y) && !visited[new_x][new_y]) {
	bfs.push({new_x, new_y});
	visited[new_x][new_y] = 1;
      }
    }
  }
  
  cout << (found ? "YES" : "NO") << endl;
}
