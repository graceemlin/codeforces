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
    int k;
    cin >> k;

    if (k == 1 && n == 1) {
      cout << 1 << endl;
      cout << 1 << endl;
      continue;
    }
    
    if (k == 1 || k == n) {
      cout << -1 << endl;
      continue;
    }

    bool center_expansion_needed = k % 2;
    int center_lower_bound = k - center_expansion_needed;
    int right_lower_bound = k + 1 + center_expansion_needed;
    
    cout << 3 << endl;
    cout << 1 << ' ' << center_lower_bound << ' ' << right_lower_bound << endl;
  }
}
