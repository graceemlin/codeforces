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

    bool found = false;
    int res{};

    auto check = [&] (int x, int y, int z) -> bool {
      return (x + y > z) && (x + z > y) && (y + z > x) && (x > y);
    };

    int y = x;
    
    while (y) {
      y >>= 1;

      if (check(x, y, x ^ y)) {
	res = y;
	found = true;
	break;
      }
      
      if (check(x, y | 1, x ^ (y | 1))) {
	res = y | 1;
	found = true;
	break;
      }
    }

    if (found) {
      cout << res << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
