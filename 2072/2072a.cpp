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
    int k;
    cin >> k;
    int p;
    cin >> p;

    if (k == 0) {
      cout << 0 << endl;
      continue;
    }
    
    vector<int> elements(n, 0);

    const bool positive_target = k > 0;
    int operations{};
    int sum{};
    bool possible = false;
    for (int element: elements) {
      sum += p * (positive_target ? 1 : -1);
      ++operations;
      possible |= (positive_target ? (sum >= k) : (sum <= k));
      if (possible == true) {
	break;
      }
    }
    
    cout << (possible ? operations : -1) << endl;
  }
}
