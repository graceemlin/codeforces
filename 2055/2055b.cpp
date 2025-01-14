#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int64_t> held(n);
    for (int i = 0; i < n; ++i) {
      cin >> held[i];
    }

    vector<int64_t> needed(n);
    for (int i = 0; i < n; ++i) {
      cin >> needed[i];
    }
    
    int64_t minimum_surplus = INT64_MAX;
    for (int i = 0; i < n; ++i) {
      if (needed[i] <= held[i]) {
	minimum_surplus = min(minimum_surplus, held[i] - needed[i]);
      }
    }
    
    bool possible = true;
    bool index_found = false;
    int filled_index{};
    int64_t cost{};
    
    for (int i = 0; i < n; ++i) {
      if (held[i] < needed[i]) {
	if (!index_found) {
	  index_found = true;
	  filled_index = i;
	  cost = needed[i] - held[i];
	} else {
	  possible = false;
	  break;
	}
      }
    }
    
    possible &= cost <= minimum_surplus;
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
