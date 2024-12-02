#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    int64_t m;
    cin >> m;
    int64_t k;
    cin >> k;

    string s;
    cin >> s;
    
    int64_t result{};
    int64_t zero_temp{};

    for (int i = 0; i < n; ++i) {
      if (s[i] == '0') {
        ++zero_temp;
      } else {
        zero_temp = 0;
      }

      if (zero_temp == m) {
        ++result;
        i += k - 1;
        zero_temp = 0;
      }
    }

    cout << result << endl;
  }
}
