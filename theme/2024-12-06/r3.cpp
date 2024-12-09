#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int64_t> elements(n);
    for(int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    set<int64_t> exists;
    
    bool match_found = false;
    for(int i = 0; i < n; ++i) {
      if (!exists.insert(elements[i]).second) {
        match_found = true;
        break;
      }
    }

    cout << (match_found ? "YES" : "NO") << endl;

  }
}
