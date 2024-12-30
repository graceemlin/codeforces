#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>

using namespace std;


int sol(int64_t x) {
  if (x < 4) {
     return 1;
  } else {
    return 2 * sol(x / 4);
  }
}

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    cout << sol(n) << endl;
  }
}
