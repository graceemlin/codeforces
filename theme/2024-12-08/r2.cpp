#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    if (n <= 1) {
      cout << 0 << endl;
      continue;
    }

    int64_t mid{};
    int64_t l = 0;
    int64_t r = sqrt(n) + 20000;

    while (l < r) {
      mid = (l + r) / 2;
      if (mid * mid >= n) {
        r = mid;
      } else if (mid * mid < n) {
        l = mid + 1;
      }
    }
    
    cout << r - 1 << endl;
  }
}
