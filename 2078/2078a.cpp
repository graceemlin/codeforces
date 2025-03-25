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
    int64_t x;
    cin >> x;
    vector<int64_t> a(n);
    for (int64_t i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int64_t sum = accumulate(a.begin(), a.end(), 0);
    bool possible = sum / n == x;
    possible &= sum % n == 0;
    cout << (possible ? "YES" : "NO") << endl;
  }
}
