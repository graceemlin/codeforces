#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int64_t t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t b;
    cin >> b;
    int64_t c;
    cin >> c;

    if (c >= n) {
      cout << n << endl;
      continue;
    }
    
    if (b == 0) {
      if (c < n - 2) {
	cout << -1 << endl;
	continue;
      }
      
      cout << n - 1 << endl;
      continue;
    }

    int64_t elements_greater_than_n = (n - c - 1) / b + 1;
    cout << n - elements_greater_than_n << endl;
  }
}
