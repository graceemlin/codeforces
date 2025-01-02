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
    int m;
    cin >> m;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
      cin >> weights[i];
    }

    if (m != n || n == 2) {
      cout << -1 << endl;
      continue;
    }

    int sum = accumulate(weights.begin(), weights.end(), 0);
    sum *= 2;

    cout << sum << endl;
    for (int i = 1; i < n; ++i) {
      cout << i << ' ' << i + 1 << endl;
    }
    cout << n << ' ' << 1 << endl;
  }
}
