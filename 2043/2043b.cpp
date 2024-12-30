#include <bits/stdc++.h>
#include <climits>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t d;
    cin >> d;

    cout << 1 << ' ';
    
    if (d % 3 == 0 || n >= 3) {
      cout << 3 << ' ';
    }

    if (d == 5) {
      cout << 5 << ' ';
    }

    if (d == 7 || n >= 3) {
      cout << 7 << ' ';
    }

    if (d == 9 || n >= 6 || d % 3 == 0 && n >= 3) {
      cout << 9 << ' ';
    }

    cout << endl;
  }
}
