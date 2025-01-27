#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int64_t> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    bool possible = true;
    for (int i = 0; i < n; ++i) {
      possible &= elements[i] > 2 * i;
      possible &= elements[i] > 2 * (n - 1 - i);
    }
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
