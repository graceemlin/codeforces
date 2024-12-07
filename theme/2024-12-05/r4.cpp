#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> candies(n);
    for(int i = 0; i < n; ++i) {
      cin >> candies[i];
    }

    int sum{};
    vector<int> prefix(n);
    for (int i = 0; i < n; ++i) {
      sum += candies[i];
      prefix[i] = sum;
    }

    sum = 0;
    vector<int> suffix(n);
    for (int i = 0; i < n; ++i) {
      sum += candies[n - i - 1];
      suffix[i] = sum;
    }

    int mx_global = 0;
    int mx_local = 0;
    for (int alice_candies = 0; alice_candies < n; ++alice_candies) {
      auto bob_match = lower_bound(suffix.begin(), suffix.end(), prefix[alice_candies]);
      if (bob_match != suffix.end() && (*bob_match == prefix[alice_candies])) {
        const int bob_candies = distance(suffix.begin(), bob_match) + 2;
        if (alice_candies + bob_candies > n) {
          continue;
        }
        mx_local = alice_candies + bob_candies;
        mx_global = max(mx_global, mx_local);
      }
    }

    cout << mx_global << endl;
  }
}
