#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    int curr_gcd = elements[0];
    for (int i = 1; i < n; ++i) {
      curr_gcd = gcd(curr_gcd, elements[i]);
    }

    if (curr_gcd == 1) {
      cout << 0 << endl;
      continue;
    }

    if (gcd(curr_gcd, n) == 1) {
      cout << 1 << endl;
    } else if (gcd(curr_gcd, n - 1) == 1) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }
}
