#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t m;
    cin >> m;
    int64_t L;
    cin >> L;

    vector<tuple<int64_t, int64_t, bool>> hurdles_and_power_ups;
	  
    for (int i = 0; i < n; ++i) {
      int64_t l;
      cin >> l;
      int64_t r;
      cin >> r;
      hurdles_and_power_ups.push_back({l, r, 0});
    }

    for (int i = 0; i < m; ++i) {
      int64_t x;
      cin >> x;
      int64_t v;
      cin >> v;
      hurdles_and_power_ups.push_back({x, v, 1});
    }

    sort(hurdles_and_power_ups.begin(), hurdles_and_power_ups.end());

    bool possible = true;
    int64_t operations = 0;
    int64_t power = 1;    
	  
    priority_queue<int64_t> heap;
    for (const auto& [location, extra, type] : hurdles_and_power_ups) {
      if (type == 1) {
	heap.push(extra);
      } else {
	int64_t distance = extra - location; 
	
	while (power <= distance + 1) {
	  if (heap.empty()) {
	    possible = false;
	    break;
	  }
	  
	  power += heap.top();
	  heap.pop(); 
	  ++operations;
	}
	
	if (!possible) {
	  break;
	}
      }
    }

    if (!possible) {
      cout << -1 << endl;
      continue;
    }
    
    cout << operations << endl;
  }
}
