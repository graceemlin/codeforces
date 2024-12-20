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

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    bool in_group = false;
    int groups{};
    for (int i = 0; i < n; ++i) {
      if (!in_group && a[i] != 0) {
        in_group = true;
        ++groups;
      } else if (in_group && a[i] == 0) {
        in_group = false;
      }
    }

    int operations = min(groups, 2);
    cout << operations << endl;
  }
}
