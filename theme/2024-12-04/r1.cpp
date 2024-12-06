#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int k;
    cin >> k;
    int q;
    cin >> q;

    vector<int> removals(k);
    for (int i = 0; i < k; ++i) {
      cin >> removals[i];
    }

    vector<int> players(q);
    for (int i = 0; i < q; ++i) {
      cin >> players[i];
    }

    int smallest = *removals.begin();
    for (int i = 0; i < q; ++i) {
      cout << min(players[i], smallest - 1) << ' ';
    }
    cout << endl;
  }
}
