#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  static constexpr pair<int, int> directions[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
  static constexpr char cell_dirs[4] = {'U', 'L', 'D', 'R'};

  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t m;
    cin >> m;

    vector<vector<char>> maze(n, vector<char>(m, '0'));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> maze[i][j];
      }
    }

    const auto is_valid = [&] (const pair<int, int>& coord) -> bool {
      const int valid_x = coord.first;
      const int valid_y = coord.second;
      return (valid_x < n) && (valid_y < m) && (valid_x >= 0) && (valid_y >= 0);
    };

    const auto is_exit = [&] (const pair<int, int>& coord) -> bool {
      const int exit_x = coord.first;
      const int exit_y = coord.second;
      return ((exit_x == n - 1) && (maze[exit_x][exit_y] == 'D')) ||
          ((exit_x == 0) && (maze[exit_x][exit_y] == 'U')) ||
          ((exit_y == m - 1) && (maze[exit_x][exit_y] == 'R')) ||
          ((exit_y == 0) && (maze[exit_x][exit_y] == 'L'));
    };

    int64_t loops{};
    queue<pair<int, int>> bfs;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (is_exit({i, j})) {
          maze[i][j] = '#';
          bfs.push({i, j});
        }
      }
    }

    while (!bfs.empty()) {
      const auto curr = bfs.front();
      bfs.pop();
      const int curr_x = curr.first;
      const int curr_y = curr.second;

      for (int i = 0; i < 4; ++i) {
        const pair<int, int>& dir = directions[i];
        const int dx = dir.first;
        const int dy = dir.second;

        const int next_x = curr_x + dx;
        const int next_y = curr_y + dy;

        if (is_valid({next_x, next_y}) &&
            (maze[next_x][next_y] == cell_dirs[i])) {
          maze[next_x][next_y] = '#';
          bfs.push({next_x, next_y});
        }
      }
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (maze[i][j] == '?') {
          bfs.push({i, j});
        }
      }
    }

    while (!bfs.empty()) {
      const auto curr = bfs.front();
      bfs.pop();
      const int curr_x = curr.first;
      const int curr_y = curr.second;
      int surround = 0;

      for (const auto& dir: directions) {
        const int dx = dir.first;
        const int dy = dir.second;

        const int next_x = curr_x + dx;
        const int next_y = curr_y + dy;

        if (!is_valid({next_x, next_y})) {
          ++surround;
          continue;
        }

        if (maze[next_x][next_y] == '#') {
          ++surround;
        }
      }

      if (surround == 4) {
        maze[curr_x][curr_y] = '#';
      }
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (maze[i][j] != '#') {
          ++loops;
        }
      }
    }

    cout << loops << endl;
  }
}
