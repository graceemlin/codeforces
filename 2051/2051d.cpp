#include <bits/stdc++.h>
#include <algorithm>
#include <cstdint>
#include <numeric>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t x;
    cin >> x;
    int64_t y;
    cin >> y;

    vector<int64_t> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }
    
    sort(elements.begin(), elements.end());
    
    int64_t pairs{};
    int64_t total_sum = accumulate(elements.begin(), elements.end(), 0LL);
    for (int64_t i = 0; i < n - 1; ++i) {
      int64_t new_sum = total_sum - elements[i];
      auto low_search = lower_bound(elements.begin() + i + 1, elements.end(), new_sum - y);
      auto up_search = upper_bound(elements.begin() + i + 1, elements.end(), new_sum - x);  
      pairs += abs(up_search - low_search);
    }

    cout << pairs << endl;
  }
}
