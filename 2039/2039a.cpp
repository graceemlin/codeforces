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

    for (int i = 0; i < n; ++i) {
      cout << 2 * i + 1 << ' ';
    }
    cout << endl;
  }
}
