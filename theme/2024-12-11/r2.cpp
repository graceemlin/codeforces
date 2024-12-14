#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    if (!is_sorted(elements.begin(), elements.end())) {
      cout << 0 << endl;
      continue;
    } else {
      int64_t smallest_diff = INT64_MAX;
      for (int i = 1; i < n; ++i) {
        smallest_diff = min(smallest_diff, ((elements[i] - elements[i - 1]) / 2) + 1);
      }

      cout << smallest_diff << endl;
    }
  }
}
