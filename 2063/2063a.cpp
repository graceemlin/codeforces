#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int64_t l;
    cin >> l;
    int64_t r;
    cin >> r;
    
    if (l == 1 && r == 1) {
      cout << 1 << endl;
      continue;
    }
    
    cout << r - l << endl;
  }
}
