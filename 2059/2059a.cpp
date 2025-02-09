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

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }

    set<int> s1 (a.begin(), a.end());
    set<int> s2 (b.begin(), b.end());

    bool possible = (s1.size() + s2.size() > 3);
    cout << (possible ? "YES" : "NO") << endl;
  }
}
