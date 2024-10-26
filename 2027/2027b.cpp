#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t>elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    int64_t removals = INT64_MAX;
    for (int i = 0; i < n; ++i) {
      int64_t larger_after = 0;
      for (int j = i + 1; j < n; ++j) {
	if (elements[j] > elements[i]) {
	  ++larger_after;
	}
      }
      removals = min(removals, larger_after + i);
    }

    cout << removals << endl;
  }
}
