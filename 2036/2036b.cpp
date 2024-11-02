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
    
    vector<int> bottles(k + 1, 0);
    for (int i = 0; i < k; ++i) {
      int b;
      cin >> b;
      int c;
      cin >> c;

      bottles[b] += c;
    }

    sort(bottles.begin(), bottles.end(), greater());
    
    int max_shelves = n > k ? k + 1: n;
    int max_amount = accumulate(bottles.begin(), bottles.begin() + max_shelves, 0);

    cout << max_amount << endl;
  }
}
