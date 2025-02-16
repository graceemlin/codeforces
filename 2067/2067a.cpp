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
    int y;
    cin >> y;

    bool possible = y % 9 == (x - 8) % 9;
    possible &= x > 8 && x > y;
    possible |= x + 1 == y;
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
