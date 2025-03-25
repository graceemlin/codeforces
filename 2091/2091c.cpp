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

    if (n % 2 == 0) {
      cout << -1 << endl;
    } else {
      vector<int> reversed(n);
      iota(reversed.rbegin(), reversed.rend(), 1);

      for (int i = 0; i < n; ++i) {
	cout << reversed[i] << " ";
      }
      cout << endl;
    }
  }
}
