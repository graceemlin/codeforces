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
    int64_t k;
    cin >> k;
    int64_t q;
    cin >> q;

    vector<int64_t> temps(n);
    for (int i = 0; i < n; ++i) {
      cin >> temps[i];
    }

    vector<int64_t> suitable_lengths;
    int curr_length{};
    int idx{};
    bool on_vacation = false;
    while (idx < n) {
      if (!on_vacation && temps[idx] <= q) {
        ++curr_length;
        on_vacation = true;
      } else if (on_vacation && temps[idx] <= q) {
        ++curr_length;
      } else if (on_vacation) {
        if (curr_length >= k) {
          suitable_lengths.push_back(curr_length);
        }
        curr_length = 0;
        on_vacation = false;
      }
      ++idx;
    }

    if (on_vacation && curr_length >= k) {
      suitable_lengths.push_back(curr_length);
    }

    int64_t sum{};
    for (int64_t vacation_length: suitable_lengths) {
      int64_t count = vacation_length - k + 1;
      sum += (count * (count + 1)) / 2;
    }

    cout << sum << endl;
  }
}
