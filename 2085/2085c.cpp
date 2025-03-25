#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int64_t x;
    cin >> x;
    int64_t y;
    cin >> y;

    auto check = [&] (int64_t x, int64_t y, int64_t k) -> bool {
       return (x + k + y + k) == ((x + k) ^ (y + k));
    };

    if (x == y) {
      cout << -1 << endl;
      continue;
    }

    bool found = false;
    int64_t res = -1;
    for (int i = 60; i >= 0; --i) {
      int64_t k = (1 << i) - y;
      if (k < 0) continue;
      if (check(x, y, k)) {
	found = true;
	res = k;
	break;
      }
    }
        
    if (!found) {
      for (int i = 60; i >= 0; --i) {
	int64_t k = (1 << i) - x;
	if (k < 0) continue;
	if (check(x, y, k)) {
	  res = k;
	  break;
	}
      }
    }

    cout << res << endl;
  }
}
