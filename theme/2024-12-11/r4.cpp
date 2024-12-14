#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int k;
    cin >> k;

    if (k > 30) {
      cout << n + 1 << endl;
      continue;
    }

    int ways = min(n + 1, 1 << k);
    cout << ways << endl;
  }
}
