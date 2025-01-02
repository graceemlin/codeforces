#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  vector<int> students(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> students[i];
  }
  
  for (int i = 1; i <= n; ++i) {
    vector<int> visited(n + 1);
    int current_node = i;
    while (!visited[current_node]) {
      visited[current_node] = 1;
      current_node = students[current_node];
    }

    cout << current_node << ' ';
  }

  cout << endl;
}
