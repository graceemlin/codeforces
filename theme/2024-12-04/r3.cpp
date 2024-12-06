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

    vector<int64_t> petya(n);
    for (int64_t i = 0; i < n; ++i) {
      cin >> petya[i];
    }

    vector<int64_t> vasya(m);
    for (int64_t i = 0; i < m; ++i) {
      cin >> vasya[i];
    }

    sort (petya.rbegin(), petya.rend());
    sort (vasya.rbegin(), vasya.rend());

    int64_t l1 = 0;
    int64_t r1 = n - 1;
    int64_t l2 = 0;
    int64_t r2 = m - 1;

    int64_t sum{};
    for (int64_t i = 0; i < n; ++i) {
        if (abs(petya[l1] - vasya[r2]) > abs(petya[r1] - vasya[l2])) {
          sum += abs(petya[l1++] - vasya[r2--]);
        } else {
          sum += abs(petya[r1--] - vasya[l2++]);
        }
    }

    cout << sum << endl;
  }
}
