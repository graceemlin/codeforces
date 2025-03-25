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

    if (find(a.begin(), a.end(), 0) == a.end()) {
      cout << 1 << endl;
      cout << 1 << " " << a.size() << endl;
      continue;
    }
    
    vector<pair<int, int>> result;
    for (int i = 0; i < n; ++i) {
      if (a[i] == 0 && i < n - 1) {
	result.push_back({i + 1 - result.size(), i + 2 - result.size()});
	++i;
      } else if (a[i] == 0) {
	result.push_back({i - result.size(), i + 1 - result.size()});
      }
    }
    
    result.push_back({1, a.size() - result.size()});
    
    cout << result.size() << endl;
    for (auto [start, end] : result) {
      cout << start << " " << end << endl;
    }
  }
}
