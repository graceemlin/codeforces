#include <bits/stdc++.h>
#include <cstdint>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    const double sum = accumulate(elements.begin(), elements.end(), 0);

    bool found = false;
    for (int i = 0; i < n; ++i) {
      if ((sum - elements[i]) / (n - 1) == elements[i]) {
        found = true;
        break;
      }
    }

    cout << (found ? "YES" : "NO") << endl;
  }
}
