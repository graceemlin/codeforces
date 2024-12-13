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

    int64_t path_sum{};
    while (n >= 1) {
      path_sum += n;
      n /= 2;
    }

    cout << path_sum << endl;
  }
}
