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
    int k;
    cin >> k;

    bool found = false;
    int partition = -1;
    for (int i = 1; i <= n; ++i) {
      int first = (i * (i - 1)) / 2;
      int second = ((n - i) * ((n - i) - 1)) / 2;
      if (first + second == k) {
        found = true;
        partition = i;
        break;
      }
    }

    if (!found) {
      cout << "NO" << endl;
      continue;
    } else {
      cout << "YES" << endl;
      for (int i = 0; i < partition; ++i) {
        cout << 1 << ' ';
      }
      for (int i = partition; i < n; ++i) {
        cout << -1 << ' ';
      }

      cout << endl;
    }
  }
}
