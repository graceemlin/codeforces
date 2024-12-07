#include <bits/stdc++.h>
#include <algorithm>
#include <cstdint>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> powers(n);
    for (int i = 0; i < n; ++i) {
      cin >> powers[i];
    }

    int64_t sum{};
    multiset<int> levels;
    for (int card: powers) {
      if (card > 0) {
        levels.insert(card);
      } else if (levels.size() > 0) {
        const int largest = *levels.rbegin();
        sum += largest;
        levels.erase(levels.find(largest));
      }
    }

    cout << sum << endl;
  }
}
