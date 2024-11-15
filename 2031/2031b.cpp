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

    vector<int> sticks(n);
    for (int i = 0; i < n; ++i) {
      cin >> sticks[i];
    }

    for (int i = 0; i < n - 1; ++i) {
      if (sticks[i] - sticks[i + 1] == 1) {
        swap(sticks[i], sticks[i + 1]);
      }
    }
    
    bool possible = is_sorted(sticks.begin(), sticks.end());
    cout << (possible ? "YES" : "NO") << endl;
  }
}
