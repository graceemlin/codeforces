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
    
    vector<long long> wealth(n);
    for (int i = 0; i < n; ++i) {
      cin >> wealth[i];
    }

    if (n <= 2) {
      cout << -1 << endl;
      continue;
    }

    sort(wealth.begin(), wealth.end());

    long long median = wealth[n / 2];
    long long min_x = 0;

    long long starting_sum = 0;
    for (auto accounts: wealth) {
      starting_sum += accounts;
    }

    if ((2 * n * median) < starting_sum) {
      cout << 0 << endl;
      continue;
    } else {
      min_x = (2 * n * median) - starting_sum;
    }

    cout << ++min_x << endl;
  }
}
