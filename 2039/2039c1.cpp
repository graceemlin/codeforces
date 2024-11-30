#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int64_t x;
    cin >> x;
    int64_t m;
    cin >> m;

    int64_t shifts = 1;
    while (shifts <= x) {
      shifts <<= 1;
    }

    int64_t result = 0;
    for (int64_t i = 1; i <= min(shifts, m); ++i) {
      int64_t xy = x ^ i;
      if ((xy != 0) && (!(x % xy) || !(i % xy))) {
        ++result;
      }
    }

    cout << result << endl;
  }
}
