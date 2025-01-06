#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;

    cout << max(n, m) + 1 << endl;
  }
}
