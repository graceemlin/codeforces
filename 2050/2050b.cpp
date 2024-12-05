#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t> elements(n);
    for (int64_t i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    int64_t odd_sum{};
    int64_t even_sum{};
    int64_t odd_nums{};
    int64_t even_nums{};
    int64_t tot_sum{};
    
    for (int64_t i = 0; i < n; ++i) {
      if (i & 1) {
        odd_sum += elements[i];
        ++odd_nums;
      } else {
        even_sum += elements[i];
        ++even_nums;
      }

      tot_sum += elements[i];
    }

    bool possible = tot_sum % n == 0;
    possible &= odd_sum % odd_nums == 0;
    possible &= even_sum % even_nums == 0;
    possible &= odd_sum / odd_nums == even_sum / even_nums;
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
