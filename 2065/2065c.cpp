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
    int m;
    cin >> m;

    vector<int64_t> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    vector<int64_t> b(m);
    for (int i = 0; i < m; ++i) {
      cin >> b[i];
    }
    
    bool possible = true;
    for (int i = 0; i < n; ++i) {
      const int smaller = min(b[0] - a[i], a[i]);
      const int larger = max(b[0] - a[i], a[i]);
      if (i > 0) {
	if (smaller >= a[i - 1]) {
	  a[i] = smaller;
	} else if (larger < a[i - 1]) {
	  possible = false;
	  break;
	} else {
	  a[i] = larger;
	}
      } else {
	a[i] = smaller;
      }
    }
	      
    cout << (possible ? "YES" : "NO") << endl;
  }
}
