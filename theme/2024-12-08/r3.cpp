#include <bits/stdc++.h>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    string n;
    cin >> n;

    vector<pair<int, int>> pairs(n.size());
    bool prev_smaller = false;
    for (int i = 0; i < n.size(); ++i) {
      const int pt1 = (n[i] - '0') / 2;
      const int pt2 = (n[i] - '0') - pt1;
      if ((pt1 < pt2)) {
        pairs[i] = prev_smaller ? make_pair(pt2, pt1) : make_pair(pt1, pt2);
        prev_smaller = !prev_smaller;
      } else {
        pairs[i] = make_pair(pt1, pt2);
      }
    }

    int res1 = pairs[0].first;
    int res2 = pairs[0].second;
    for (int i = 1; i < n.size(); ++i) {
      res1 *= 10;
      res2 *= 10;
      res1 += pairs[i].first;
      res2 += pairs[i].second;
    }

    cout << res1 << ' ' << res2 << endl;
  }
}
