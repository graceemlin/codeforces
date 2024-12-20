#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    bool possible = x % 33 == 0;
    cout << (possible ? "YES" : "NO") << endl;
  }
}
