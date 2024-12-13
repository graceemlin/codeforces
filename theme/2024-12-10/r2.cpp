#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int k;
  cin >> k;

  while (k--) {
    int64_t n;
    cin >> n;
    int64_t x;
    cin >> x;
    int64_t t;
    cin >> t;

    const int64_t overlap = t / x;
    
    if (n <= overlap) {
      cout << (n * (n - 1)) / 2 << endl;
      continue;
    }

    cout << (n - overlap) * (overlap) + (((overlap - 1) * (overlap)) / 2) << endl;
  }
}
