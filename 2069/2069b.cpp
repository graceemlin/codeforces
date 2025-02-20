#include <bits/stdc++.h>

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
    
    set<int> seen;
    vector<vector<int>> elements(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cin >> elements[i][j];
	seen.insert(elements[i][j]);
      }
    }

    if (n == 1 && m == 1) {
      cout << 0 << endl;
      continue;
    }

    map<int, int> color_to_cost;
    
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m - 1; ++j) {
	if (elements[i][j] == elements[i][j + 1]) {
	  color_to_cost[elements[i][j]] = 2;
	}
      }
    }

    for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < m; ++j) {
	if (elements[i][j] == elements[i + 1][j]) {
	  color_to_cost[elements[i][j]] = 2;
	}
      }
    }
	
    for (const auto num : seen) {
      if (color_to_cost[num] == 0) {
	++color_to_cost[num];
      }
    }

    priority_queue<int> heap;
    for (const auto &[key, value] : color_to_cost) {
      heap.push(value);
    }

    heap.pop();
    int result{};
    while (!heap.empty()) {
      result += heap.top();
      heap.pop();
    }

    cout << result << endl;
  }
}
