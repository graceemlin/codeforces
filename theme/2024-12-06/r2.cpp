#include <bits/stdc++.h>
#include <algorithm>
#include <cstdint>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  vector<int> contests(n);
  for (int i = 0; i < n; ++i) {
    cin >> contests[i];
  }

  sort(contests.begin(), contests.end());

  int max_days{};
  int last{};
  for (int i = 0; i < n; ++i) {
    auto search = lower_bound(contests.begin() + last, contests.end(), i + 1);
    if (search != contests.end()) {
      ++max_days;
      last = distance(contests.begin(), search) + 1;
    } else {
      break;
    }
  }

  cout << max_days << endl;
}
