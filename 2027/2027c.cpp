#include <bits/stdc++.h>
#include <cstdint>
#include <sys/types.h>

using namespace std;

int64_t dfs(const unordered_map<int64_t, vector<int64_t>>& graph, const int64_t key, unordered_set<int64_t>& visited);

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t> elements(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> elements[i];
    }
    
    unordered_map<int64_t, vector<int64_t>> graph;
    for (int i = 2; i <= n; ++i) {
      int64_t required_size = elements[i] + i - 1;
      int64_t transform_size = elements[i] + 2 * i - 2;      
      graph[required_size].push_back(transform_size);
    }

    unordered_set<int64_t> visited;
    cout << dfs(graph, n, visited) << endl;
  }
}

int64_t dfs(const unordered_map<int64_t, vector<int64_t>>& graph, const int64_t key, unordered_set<int64_t>& visited) {
  int64_t max_return = key;
  if (graph.find(key) == graph.end()) {
    return max_return;
  }

  if (!visited.insert(key).second) {
    return 0;
  }
  
  for (auto neighbor : graph.at(key)) {
    max_return = max(max_return, dfs(graph, neighbor, visited));
  }

  return max_return;
}
