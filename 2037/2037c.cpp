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

    if (n < 5) {
      cout << -1 << endl;
      continue;
    }

    for (int i = 6; i <= n; i += 2) {
      cout << i << ' ';
    }

    cout << 2 << ' ' << 4 << ' ' << 5 << ' ' << 3 << ' ' << 1 << ' ';

    for (int i = 7; i <= n; i += 2) {
      cout << i << ' ';
    }

    cout << endl;
  }
}
