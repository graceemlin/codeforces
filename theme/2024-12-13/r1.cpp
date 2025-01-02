#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;

    int x1;
    cin >> x1;
    int y1;
    cin >> y1;

    int x2;
    cin >> x2;
    int y2;
    cin >> y2;
    
    const auto check = [&] (const int x, const int y) {
      if ((x == 1 || x == n) && (y == 1 || y == m)) {
	return 2;
      } else if (x == 1 || x == n || y == 1 || y == m) {
	return 3;
      } else {
	return 4;
      }
    };

    cout << min(check(x1, y1), check(x2, y2)) << endl;
  }
}
