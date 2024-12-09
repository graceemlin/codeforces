#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <cmath>
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

    vector<int64_t> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    auto calculate_inversions = [&] () -> int64_t {
      int64_t res{};
      int64_t temp_res{};
      for (int idx = n - 1; idx >= 0; --idx) {
          if (elements[idx] == 0) {
            ++temp_res;
          } else {
            res += temp_res;
          }
      }

      return res;
    };

    int64_t inversions{};
    inversions = calculate_inversions();

    int64_t inversions_front{};
    for (int i = 0; i < n; ++i) {
      if (elements[i] == 0) {
        elements[i] = 1;
        inversions_front = calculate_inversions();
        elements[i] = 0;
        break;
      }
    }

    int64_t inversions_back{};
    for (int i = n - 1; i >= 0; --i) {
      if (elements[i] == 1) {
        elements[i] = 0;
        inversions_back = calculate_inversions();
        elements[i] = 1;
        break;
      }
    }

    inversions = max(inversions, max(inversions_front, inversions_back));

    cout << inversions << endl;
  }
}
