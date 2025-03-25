#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int l;
    cin >> l;
    int r;
    cin >> r;
    int d;
    cin >> d;
    int u;
    cin >> u;
    
    bool possible = (d == u) && (r == l) && (r == d);
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
