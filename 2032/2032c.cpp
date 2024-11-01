#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int64_t t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t> elements(n);
    for (int64_t i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    sort(elements.begin(), elements.end());

    int64_t min_slice = INT64_MAX;
    for (int i = 0; i < n - 1; ++i) {
      auto non_degenerate_bound = lower_bound(elements.begin() + i, elements.end(), elements[i] + elements[i + 1]);
      int64_t current_slice = distance(non_degenerate_bound, elements.end());
      min_slice = min(min_slice, i + current_slice);
    }
    
    cout << min_slice << endl;
  }
}
