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

    vector<int> elements(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> elements[i];
    }

    vector<int> visited(n + 1);
    vector<int> result(n + 1);

    int maximum_score{};
    for (int i = 1; i <= n; ++i) {
      vector<int> current_cycle;
      int current_node = i;
      int cycle_score{};
      while (current_node <= n && !visited[current_node]) {
	visited[current_node] = 1;
	current_cycle.push_back(current_node);
	cycle_score += elements[current_node];
	current_node += elements[current_node];
      }

      maximum_score = max(maximum_score, cycle_score);
    }

    cout << maximum_score << endl;
  }
}
