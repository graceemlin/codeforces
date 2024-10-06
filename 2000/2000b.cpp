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

    vector<int> passengers(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> passengers[i];
    }
    
    set<int> already;
    already.insert(passengers[0]);
    
    bool bad_order = false;
    for (int i = 1; i < n; ++i) {
      if (already.count(passengers[i] + 1) || already.count(passengers[i] - 1)) {
	  already.insert(passengers[i]);
      } else {
	cout << "NO" << endl;
	bad_order = true;
	break;
      }
    }
    
    if (!bad_order) {
      cout << "YES" << endl;
    }
  }
}
