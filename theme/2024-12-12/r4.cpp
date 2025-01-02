#include <bits/stdc++.h>
#include <climits>
#include <cmath>

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

    string s;
    cin >> s;
    s = '#' + s;
    
    vector<int> visited(n + 1, 0);
    vector<int> result(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
      if (visited[i]) {
	continue;
      } else {
	vector<int> current_cycle;
	int current_node = i;
	int cycle_value{};

	while (!visited[current_node]) {
	  visited[current_node] = 1;
	  current_cycle.push_back(current_node);
	  cycle_value += s[current_node] == '0';  
	  current_node = elements[current_node];
	}

	for (int node: current_cycle) {
	  result[node] = cycle_value;
	}
      }
    }

    for (int i = 1; i <= n; ++i) {
      cout << result[i] << ' ';
    }
    cout << endl;
  }
}
