#include <bits/stdc++.h>
#include <climits>
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

    vector<string> table(n);
    for (int i = 0; i < n; ++i) {
      cin >> table[i];
    }

    bool elegant = true;
    for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < m - 1; ++j) {
	if ((table[i][j] - '0') +
	    (table[i + 1][j] - '0') +
	    (table[i][j + 1] - '0') +
	    (table[i + 1][j + 1] - '0') == 3) {
	  elegant = false;
	}
      }
    }

    cout << (elegant ? "YES" : "NO") << endl;
  }
}
