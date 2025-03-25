#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int64_t t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t m;
    cin >> m;
    int64_t k;
    cin >> k;

    int64_t desks_per_row = (k + (n - 1)) / n;
    int64_t free_spaces = m - desks_per_row;
    int64_t result = (desks_per_row + (free_spaces)) / (free_spaces + 1);

    cout << result << endl;
  }  
}
