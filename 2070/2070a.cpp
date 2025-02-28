#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (n < 3) {
      cout << n + 1 << endl;
      continue;
    } else if (n < 15) {
      cout << 3 << endl;
      continue;
    }

    int remainder = n % 15;
    if (remainder < 3) {
      ++remainder;
    } else {
      remainder = 3;
    }
    
    cout << (3 * (n / 15)) + remainder << endl;
  }
}
