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

    vector<int> posts(m);
    for (int i = 0; i < m; ++i) {
      cin >> posts[i];
    }

    int idx{};
    set<int> seen;
    vector<int> result(n, -1);
    for (int i = 0; i < n; ++i) {
      while (idx < m && !seen.insert(posts[idx]).second && posts[idx] > n) {
        ++idx;
      }

      if (idx != m) {
        result[i] = idx + 1;
      }
    }

    for (int i = n - 1; i >= 0; --i) {
      cout << result[i] << ' ';
    }
    
    cout << endl;
  }
}
