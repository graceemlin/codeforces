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

    vector<int> chests(n);
    for (int i = 0; i < n; ++i) {
      cin >> chests[i];
    }
    
    sort (chests.rbegin(), chests.rend());
    
    int sum{};
    for (int i = 0; i < n; ++i) {
      if (sum + chests[i] > k) {
        break;
      }
      sum += chests[i];
    }

    cout << k - sum << endl;
  }
}
