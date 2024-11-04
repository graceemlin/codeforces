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

    vector<int64_t> original(n);
    for (int i = 0; i < n; ++i) {
      cin >> original[i];
    }
    
    vector<int64_t> found(n);
    for (int i = 0; i < n; ++i) {
      cin >> found[i];
    }

    int m;
    cin >> m;

    vector<int64_t> preserved(m);
    for (int i = 0; i < m; ++i) {
      cin >> preserved[i];
    }

    map<int64_t, int64_t> present;
    for (int i = 0; i < m; ++i) {
      present[preserved[i]]++;
    }
 
    bool suitable_sequence = find(found.begin(), found.end(), preserved.back()) != found.end();
    
    for (int i = 0; i < n; ++i) {
      if (original[i] != found[i]) {
	if (!present[found[i]]) {
	  suitable_sequence = false;
	  break;
	}
	present[found[i]]--;
      }
    }
    
    cout << (suitable_sequence ? "YES" : "NO") << endl;
  }
}
