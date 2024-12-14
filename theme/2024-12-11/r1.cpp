#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> not_contained(n);
    for (int i = 0; i < n; ++i) {
      cin >> not_contained[i];
    }

    int possible_choices = 10 - n;

    cout << 3 * possible_choices * (possible_choices - 1) << endl;
  }
}
