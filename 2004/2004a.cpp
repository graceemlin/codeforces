#include <algorithm>
#include <bits/stdc++.h>
#include <functional>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    
    vector<int> points(n,0);
    for (int i = 0; i < n; ++i) cin >> points[i];
    
    bool can_insert = (int)points.size() == 2 &&
      abs(points[1] - points[0]) > 1;
    
    cout << (can_insert ? "YES" : "NO") << endl;
  }
}
