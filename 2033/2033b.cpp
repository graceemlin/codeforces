#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    long long heights[n][n];
    vector<long long> lake_depth(n * 2 - 1, 0);
    
    for (long long i = 0; i < n; ++i) {
      for (long long j = 0; j < n; ++j) {
        cin >> heights[i][j];
      }
    }

    for (long long i = 0; i < n; ++i) {
      for (long long j = 0; j < n; ++j) {
        long long diagonal_index = n - 1 + i - j;
        lake_depth[diagonal_index] = max(lake_depth[diagonal_index], -1LL * heights[i][j]);
      }
    }

    long long spells = accumulate(lake_depth.begin(), lake_depth.end(), 0LL);

    cout << spells << endl;
  }
}
