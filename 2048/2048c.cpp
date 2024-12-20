#include <bits/stdc++.h>
#include <climits>
#include <cstddef>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    string s;
    cin >> s;

    int n = s.size();
    cout << 1 << ' ' << n << ' ';

    size_t first_zero = s.find("0");
    if (first_zero == string::npos) {
      first_zero = n - 1;
    }
    
    const int required_length = n - first_zero;
    const string original = s.substr(first_zero, required_length);

    string max_str = "";
    int start_index = 0;
    for (int i = 0; i < n - required_length; ++i) {
      const string current = s.substr(i, required_length);
      string compare = "";
      for (int j = 0; j < required_length; ++j) {
        compare += to_string((original[j]) ^ (current[j]));
      }

      if (compare > max_str) {
        max_str = compare;
        start_index = i;
      }
    }

    cout << start_index + 1 << ' ' << start_index + required_length << endl;
  }
}
