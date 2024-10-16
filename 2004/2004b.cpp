#include <algorithm>
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
    
    int L;
    cin >> L;
    int R;
    cin >> R;
    
    int need_to_lock = 0;

    int upper = min(R, r);
    int lower = max(L, l);

    bool extends_up = R != r;
    bool extends_down = L != l;

    bool range_exists = min(r, R) >= max(l, L);
    
    if (range_exists) {
      need_to_lock += extends_up + extends_down + (upper - lower);
    } else {
      need_to_lock = 1;
    }
    
    cout << need_to_lock << endl;
  }
}
